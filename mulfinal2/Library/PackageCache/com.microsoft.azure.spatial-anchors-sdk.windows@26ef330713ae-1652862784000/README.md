# Unity Windows SDK for Azure Spatial Anchors

This guide will show you how to set up your Unity project to use the Unity Windows SDK for Azure Spatial Anchors.


## Configure the Spatial Anchors account information

1. Navigate to `Assets/AzureSpatialAnchors.SDK/Resources`.
2. Select **SpatialAnchorConfig**. This file will have been automatically generated, if it did not already exist.
3. Set `Spatial Anchors Account Id` to the value provided by the Azure portal.
4. Set `Spatial Anchors Account Key` to the value provided by the Azure portal.
5. Set `Spatial Anchors Account Domain` to the value provided by the Azure portal.

**NOTE:** The **SpatialAnchorConfig** file can be used in your own projects to share service credentials across scenes. When this file is used, you do not need to set these values on each **SpatialAnchorManager** in each scene. It's also possible to ignore this file in source control to avoid checking credentials into your repository.


## Building for HoloLens

Build like a HoloLens project.


## AAD user token scenario support for HoloLens

Instead of using an account key, it's possible to acquire an AAD token and pass that into the SDK. For this we'll need to use the `Microsoft.IdentityModel.Clients.ActiveDirectory` library for the authentication.

1. Because there is no NuGet packaging system in Unity, you'll need to manually download the library and add the proper dll to your Assets folder. Steps for downloading nuget packages can be found [here](https://docs.microsoft.com/en-us/nuget/consume-packages/ways-to-install-a-package).

2. Once the package has been downloaded, copy the files from `Microsoft.IdentityModel.Clients.ActiveDirectory\4.5.0\lib\uap10.0` into your project under `Assets\Plugins\WSA`. Using the `Plugins\WSA` folder should automatically mark the library to only be used for Windows.

3. Next, make a new script which inherits from `SpatialAnchorManager`. Override the method `GetAADTokenAsync`. You can get boilerplate code from `\Library\PackageCache\com.microsoft.azure.spatial-anchors.sdk.core@<version>\Runtime\Scripts\SpatialAnchorManager.cs` to copy and paste into your override function.

4. Comment out the line that throws the `NotSupportedException`.

5. Uncomment the remaining lines in the `GetAADTokenAsync` method. (These lines use the library we just downloaded to acquire the token.)

6. Update each **SpatialAnchorManager** in your project (or update **SpatialAnchorConfig** in the `Assets/AzureSpatialAnchors.SDK/Resources` folder) to use AAD, then specify your Client ID and Tenant ID.

