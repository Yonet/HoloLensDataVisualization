// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

using Microsoft.Geospatial;
using Microsoft.Maps.Unity;
using UnityEngine;

[RequireComponent(typeof(MapRenderer))]
public class AnimateToLocation : MonoBehaviour
{
    public void Animate(string location)
    {
        if (location == "Rush")
        {
            Animate(new MapSceneOfLocationAndZoomLevel(new LatLon(40.6153, -120.1153), 10.9f));
        }
        else if (location == "Rim")
        {
            Animate(new MapSceneOfLocationAndZoomLevel(new LatLon(37.86055556, -120.0830556), 12.7f));
        }
        else if (location == "Rough")
        {
            Animate(new MapSceneOfLocationAndZoomLevel(new LatLon(36.87361111, -118.9047222), 14.3f));
        }
        else if (location == "Frying Pan")
        {
            Animate(new MapSceneOfLocationAndZoomLevel(new LatLon(41.7725, -123.3558333), 14.6f));
        }
        else if (location == "King")
        {
            Animate(new MapSceneOfLocationAndZoomLevel(new LatLon(38.7925, -120.6022222), 15.6f));
        }
    }

    public void Zoom(){
        // MapSceneOfLocationAndZoomLevel
    }

    public void Animate(MapScene mapScene)
    {
        var mapRenderer = GetComponent<MapRenderer>();
        mapRenderer.SetMapScene(mapScene);
    }
}
