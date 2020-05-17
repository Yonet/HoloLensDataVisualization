using Microsoft.Geospatial;
using Microsoft.Maps.Unity;
using System;
using System.Globalization;
using TMPro;
using UnityEngine;

public class MapPinService : MonoBehaviour
{
    [SerializeField]
    private MapPinLayer _mapPinLayer = null;

    [SerializeField]
    private MapPin _mapPinPrefab = null;

    [SerializeField]
    private TextAsset _mapPinLocationsCsv = null;
    // Start is called before the first frame update
    void Awake()
    {
        Debug.Assert(_mapPinLayer != null);
        Debug.Assert(_mapPinPrefab != null);
        Debug.Assert(_mapPinLocationsCsv != null);

        var lines = _mapPinLocationsCsv.text.Split(new[] { "\n" }, StringSplitOptions.RemoveEmptyEntries);
        _mapPinPrefab.gameObject.SetActive(false);

        foreach (var csvLine in lines)
        {
            var csvEntries = csvLine.Split(',');
            Debug.Assert(csvEntries[4] != null);
            if (csvEntries[2].ToLower() == "arson" & csvEntries[1] != "0" )
            {
                var mapPin = Instantiate(_mapPinPrefab);
                var size = double.Parse(csvEntries[3], NumberStyles.Number, CultureInfo.InvariantCulture);
                if(size > 10000){
                    Debug.Log("scaled pin " + size);
                    mapPin.transform.localScale = new Vector3(15 , 15, 15);
            
                }
                mapPin.Location = new LatLon(
                    double.Parse(csvEntries[4], NumberStyles.Number, CultureInfo.InvariantCulture),
                    double.Parse(csvEntries[5], NumberStyles.Number, CultureInfo.InvariantCulture)
                );
                Debug.Log("_mapPinLayer.LayerName" + _mapPinLayer.LayerName);
                _mapPinLayer.MapPins.Add(mapPin);
                mapPin.GetComponentInChildren<TextMeshPro>().text = csvEntries[3] == "null" ? "" : csvEntries[3];

            }




        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
