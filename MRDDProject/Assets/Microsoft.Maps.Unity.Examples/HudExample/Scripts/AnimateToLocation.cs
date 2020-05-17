// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

using Microsoft.Geospatial;
using Microsoft.Geospatial.VectorMath;
using Microsoft.Maps.Unity;
using UnityEngine;
using System;
using Microsoft.MixedReality.Toolkit.Utilities;

[RequireComponent(typeof(MapRenderer))]
public class AnimateToLocation : MonoBehaviour
{
    private float currentZoomLevel = 1.0f;

    private LatLon center;
    private MapRenderer mapRenderer;
    private MapRenderer hostRenderer;
      private Vector3 _startingPointInLocalSpace;
      private Vector2D _startingPointInMercatorSpace;
      private Vector2 _currentZoomValue;

    void Start()
    {
        mapRenderer = GetComponent<MapRenderer>();
        hostRenderer = GameObject.FindGameObjectsWithTag("3DMap")[0].GetComponent<MapRenderer>();
        _startingPointInMercatorSpace = mapRenderer.Center.ToMercatorPosition();
        center = new LatLon(40.6153, -120.1153);
        currentZoomLevel = 10.01f;
        Debug.Log("currentZoomLevel " + currentZoomLevel);
        Debug.Log("startingPointInMercatorSpace " + _startingPointInMercatorSpace);
    }


    public void Animate(string location)
    {
        if (location == "Rush")
        {
            Debug.Log("Animating to Rush");
            center = new LatLon(40.6153, -120.1153);
            Animate(new MapSceneOfLocationAndZoomLevel(center, currentZoomLevel));
        }
        else if (location == "Rim")
        {
            Debug.Log("Animating to Rim");
            center = new LatLon(37.86055556, -120.0830556);
            Animate(new MapSceneOfLocationAndZoomLevel(center, currentZoomLevel));
        }
        else if (location == "Rough")
        {
            Debug.Log("Animating to Rough");
            center = new LatLon(36.87361111, -118.9047222);
            Animate(new MapSceneOfLocationAndZoomLevel(center, currentZoomLevel));
        }
        else if (location == "Frying Pan")
        {
            Debug.Log("Animating to fp");
            center = new LatLon(41.7725, -123.3558333);
            Animate(new MapSceneOfLocationAndZoomLevel(center, currentZoomLevel));
        }
        else if (location == "King")
        {
            Debug.Log("Animating to K");
            center = new LatLon(38.7925, -120.6022222);
            Animate(new MapSceneOfLocationAndZoomLevel(center, currentZoomLevel));
        }
    }

    public void ZoomIn()
    {
        if (mapRenderer.ZoomLevel < 20)
        {
            currentZoomLevel = hostRenderer.ZoomLevel + 1.01f;
            Animate(new MapSceneOfLocationAndZoomLevel(center, currentZoomLevel));
            Debug.Log("Animating zoom in to " + currentZoomLevel);
        }

    }

    public void ZoomOut()
    {
        if (mapRenderer.ZoomLevel > 1)
        {
            currentZoomLevel = hostRenderer.ZoomLevel - 1.01f;
            Animate(new MapSceneOfLocationAndZoomLevel(center, currentZoomLevel));
            Debug.Log("Zooming out to " + currentZoomLevel);

        }

    }

    public void Animate(MapScene mapScene)
    {
        mapRenderer.SetMapScene(mapScene);
        hostRenderer.SetMapScene(mapScene);
        currentZoomLevel = hostRenderer.ZoomLevel;
        center = hostRenderer.Center;
    }
}
