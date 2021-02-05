# HoloLens 2 Data Visualization

[![California Fire Data Visualization Demo with Bing Maps](./Content/Hololens%20GIF-downsized_large.gif)](http://www.youtube.com/watch?v=TjjB4RUQTG8)

## Technology

- [Unity3D](https://unity.com/)
- [Bing Maps Unity SDK](https://github.com/Microsoft/MapsSDK-Unity?WT.mc_id=github-mrdd-ayyonet)
- [Mixed Reality Toolkit Unity](https://github.com/microsoft/MixedRealityToolkit-Unity?WT.mc_id=github-mrdd-ayyonet)
- [HoloLens 2 & Windows Mixed Reality](https://docs.microsoft.com/windows/mixed-reality/?WT.mc_id=aiml-0000-ayyonet)

## Overview

**Maps SDK, a Microsoft Garage project** provides a control to visualize a 3D map in Unity. The map control handles streaming and rendering of 3D terrain data with world-wide coverage. Select cities are rendered at a very high level of detail. Data is provided by Bing Maps.

The map control has been optimized for mixed reality applications and devices including the HoloLens, HoloLens 2, Windows Immersive headsets, HTC Vive, and Oculus Rift. Soon the SDK will also be provided as an extension to the [Mixed Reality Toolkit (MRTK)](https://github.com/Microsoft/MixedRealityToolkit-Unity).

### Feature Guides

| <a href="https://github.com/microsoft/MapsSDK-Unity/wiki/Configuring-the-MapRenderer"><img src="https://github.com/Microsoft/MapsSDK-Unity/wiki/Content/FeatureGuides/WeatherCube.gif" width="280"></a> [Configuring the map](https://github.com/microsoft/MapsSDK-Unity/wiki/Configuring-the-MapRenderer) | <a href="https://github.com/microsoft/MapsSDK-Unity/wiki/Attaching-GameObjects-to-the-map"><img src="https://github.com/Microsoft/MapsSDK-Unity/wiki/Content/FeatureGuides/MtFujiZoom.gif" width="280"></a> [Attaching GameObjects](https://github.com/microsoft/MapsSDK-Unity/wiki/Attaching-GameObjects-to-the-map) | <a href="https://github.com/microsoft/MapsSDK-Unity/wiki/Adding-labels-to-the-map"><img src="https://github.com/Microsoft/MapsSDK-Unity/wiki/Content/FeatureGuides/MapLabels-NewYorkCity-English.png" width="280"></a> [Adding labels](https://github.com/microsoft/MapsSDK-Unity/wiki/Adding-labels-to-the-map) |
| :--- | :--- | :--- |
| <a href="https://github.com/microsoft/MapsSDK-Unity/wiki/Animating-with-MapScenes"><img src="https://github.com/Microsoft/MapsSDK-Unity/wiki/Content/FeatureGuides/BarcelonaPlacesAnimation.gif" width="280"></a>  [**Animating the map**](https://github.com/microsoft/MapsSDK-Unity/wiki/Animating-with-MapScenes) | <a href="https://github.com/microsoft/MapsSDK-Unity/wiki/Raycasting-the-map"><img src="https://github.com/Microsoft/MapsSDK-Unity/wiki/Content/FeatureGuides/RaycastPan.gif" width="280"></a> [**Raycasting the map**](https://github.com/microsoft/MapsSDK-Unity/wiki/Raycasting-the-map) | <a href="https://github.com/microsoft/MapsSDK-Unity/wiki/Customizing-copyrights-display"><img src="https://github.com/Microsoft/MapsSDK-Unity/wiki/Content/FeatureGuides/CustomizeCopyright.png" width="280"></a> [**Displaying copyrights**](https://github.com/microsoft/MapsSDK-Unity/wiki/Customizing-copyrights-display) |
| <a href="https://github.com/microsoft/MapsSDK-Unity/wiki/Customizing-data-sources"><img src="https://github.com/Microsoft/MapsSDK-Unity/wiki/Content/HttpTextureTileLayer-Weather.png" width="280"/></a> [**Customizing map data**](https://github.com/microsoft/MapsSDK-Unity/wiki/Customizing-data-sources) | <a href="https://github.com/microsoft/MapsSDK-Unity/wiki/Displaying-contour-lines"><img src="https://github.com/Microsoft/MapsSDK-Unity/wiki/Content/FeatureGuides/BoulderBalloon.gif" width="280"></a> [**Displaying contour lines**](https://github.com/microsoft/MapsSDK-Unity/wiki/Displaying-contour-lines) | |

## Getting started

You can download this project for Unity 2019.3.x and open [MapNavExampleScene](https://github.com/Yonet/HoloLensDataVisualization/blob/master/MRDDProject/Assets/HoloLens2Examples/MapNavExample.unity)

For instructions to download and setup the control, check out the [Getting Started](https://github.com/Microsoft/MapsSDK-Unity/wiki/Getting-Started) page on the wiki.

The Maps SDK wiki also contains documentation, an API reference, and an in-depth overview of the sample scene.

The Maps SDK repository includes **samples**, **documentation** and **supporting scripts**.

The **supporting scripts** are Unity C# scripts that extend or build on-top of the SDK. Because of their usefulness, these supporting scripts are also included in the NuGet package. The version of the supporting scripts in the repository reflects the latest version of the scripts in the NuGet package.


