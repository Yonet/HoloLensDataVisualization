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
    void Start()
    {
        Debug.Assert(_mapPinLayer != null);
        Debug.Assert(_mapPinPrefab != null);
        Debug.Assert(_mapPinLocationsCsv != null);

        var lines = _mapPinLocationsCsv.text.Split(new[] { "\n" }, StringSplitOptions.RemoveEmptyEntries);
        _mapPinPrefab.gameObject.SetActive(false);

        foreach (var csvLine in lines)
        {
            var csvEntries = csvLine.Split(',');

            var mapPin = Instantiate(_mapPinPrefab);
            mapPin.Location = new LatLon(
                double.Parse(csvEntries[0], NumberStyles.Number, CultureInfo.InvariantCulture),
                double.Parse(csvEntries[1], NumberStyles.Number, CultureInfo.InvariantCulture)
            );
      
            Debug.Log("_mapPinLayer.LayerName" + _mapPinLayer.LayerName);
            _mapPinLayer.MapPins.Add(mapPin);
            mapPin.GetComponentInChildren<TextMeshPro>().text = csvEntries[2].ToLower() == "null" ? "" : csvEntries[2];
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
