using Microsoft.Geospatial;
using Microsoft.Maps.Unity;
using System;
using System.Globalization;
using TMPro;
using UnityEngine;

public class MapGenericPinProvider : MonoBehaviour
{
     [SerializeField]
    private MapPinLayer _mapPinLayer = null;

    [SerializeField]
    private MapPin _mapPinPrefab = null;

    [SerializeField]
    private TextAsset _mapPinLocationsCsv = null;

    private void Awake()
    {
        Debug.Assert(_mapPinLayer != null);
        Debug.Assert(_mapPinPrefab != null);
        Debug.Assert(_mapPinLocationsCsv != null);

        var lines = _mapPinLocationsCsv.text.Split(new [] { "\r\n" }, StringSplitOptions.RemoveEmptyEntries);

        _mapPinPrefab.gameObject.SetActive(false);
        
        // Generate a MapPin for each of the locations and add it to the layer.
        foreach (var csvLine in lines)
        {
            var csvEntries = csvLine.Split(',');

            var mapPin = Instantiate(_mapPinPrefab);
            mapPin.Location =
                new LatLon(
                    double.Parse(csvEntries[0]),
                    double.Parse(csvEntries[1])
                    );
            _mapPinLayer.MapPins.Add(mapPin);

            mapPin.GetComponentInChildren<TextMeshPro>().text = csvEntries[4].ToLower() == "null" ? "" : csvEntries[4];
        }
    }
}