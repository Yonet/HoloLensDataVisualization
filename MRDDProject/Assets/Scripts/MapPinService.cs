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

    [SerializeField]
    public int _latitudeIndex = 0;
    [SerializeField]
    public int _longitudeIndex = 1;

    [SerializeField]
    public int _labelIndex = 2;

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
            
            var mapPin = Instantiate(_mapPinPrefab);

            mapPin.Location = new LatLon(
                double.Parse(csvEntries[6], NumberStyles.Number, CultureInfo.InvariantCulture),
                double.Parse(csvEntries[7], NumberStyles.Number, CultureInfo.InvariantCulture)
            );
            _mapPinLayer.MapPins.Add(mapPin);
            mapPin.GetComponentInChildren<TextMeshPro>().text = csvEntries[4] == "null" ? "" : csvEntries[4];

        }
    }

}
