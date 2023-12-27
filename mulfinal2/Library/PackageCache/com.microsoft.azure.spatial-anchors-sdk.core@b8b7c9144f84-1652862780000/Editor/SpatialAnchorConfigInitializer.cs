using Microsoft.Azure.SpatialAnchors.Unity;
using System.IO;
using UnityEditor;
using UnityEngine;

[InitializeOnLoad]
public class SpatialAnchorConfigInitializer
{
    const string SpatialAnchorConfigDirectory = "Assets/AzureSpatialAnchors.SDK/Resources/";
    const string SpatialAnchorConfigAssetPath = SpatialAnchorConfigDirectory + "SpatialAnchorConfig.asset";

    // EditorApplication.update runs at approximately 100 times per second.
    // Allot a 6 second period to try to find an existing SpatialAnchorConfig.
    const int MaxTries = 6 * 100;

    static int Counter = 0;

    static SpatialAnchorConfigInitializer()
    {
        // Add a callback to the EditorApplication.update event.
        // This is needed so that all the assets/resources will be recognized by Unity
        // by the time the callback is called.
        EditorApplication.update += UpdateCallback;
    }

    static void UpdateCallback()
    {
        InitializeSpatialAnchorConfig();
    }

    /// <summary>
    /// Attempt to load configuration from config resource if present; otherwise, create a new configuration.
    /// </summary>
    /// <remarks>
    /// It is unclear when resources get loaded. In some cases, we have observed that the resource did exist,
    /// but Resources.Load() still failed to find the resource. 
    /// When this occurs, the data in the asset will be reset, and we wish to avoid this.
    /// </remarks>
    static void InitializeSpatialAnchorConfig()
    {
        var configResources = Resources.LoadAll("", typeof(SpatialAnchorConfig));
        if (configResources != null && configResources.Length > 0)
        {
            if (configResources.Length > 1)
            {
                Debug.LogWarning("More than one SpatialAnchorConfig found. The first one found will be used.");
            }

            EditorApplication.update -= UpdateCallback;
        }
        else
        {
            Counter++;

            if (Counter >= MaxTries)
            {
                Debug.Log($"Didn't find SpatialAnchorConfig.asset in the Unity project.\n Creating a default config at {SpatialAnchorConfigAssetPath}.");

                Directory.CreateDirectory(SpatialAnchorConfigDirectory);

                SpatialAnchorConfig config = ScriptableObject.CreateInstance<SpatialAnchorConfig>();
                AssetDatabase.CreateAsset(config, SpatialAnchorConfigAssetPath);
            }
        }
    }
}
