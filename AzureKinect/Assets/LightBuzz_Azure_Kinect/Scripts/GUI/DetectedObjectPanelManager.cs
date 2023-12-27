using System.Collections.Generic;
using LightBuzz.Kinect4Azure;
using Microsoft.Azure.CognitiveServices.Vision.ComputerVision.Models;
using UnityEngine;

public class DetectedObjectPanelManager : MonoBehaviour
{
    [SerializeField] private GameObject _detectedObjectPrefab;
    [SerializeField] private UniformImage _image;

    private readonly List<DetectedObjectPanel> _panels = new List<DetectedObjectPanel>();

    public void Load(IList<DetectedObject> objects, CoordinateMapper mapper = null)
    {
        if (objects == null) return;

        if (_panels.Count != objects.Count)
        {
            foreach (DetectedObjectPanel panel in _panels)
            {
                Destroy(panel.gameObject);
            }

            _panels.Clear();

            foreach (DetectedObject obj in objects)
            {
                GameObject go = Instantiate(_detectedObjectPrefab, transform);
                DetectedObjectPanel panel = go.GetComponent<DetectedObjectPanel>();

                _panels.Add(panel);
            }
        }

        for (int i = 0; i < objects.Count; i++)
        {
            DetectedObject obj = objects[i];
            DetectedObjectPanel panel = _panels[i];

            panel.Load(obj, _image, mapper);
        }
    }

    private void OnDestroy()
    {
        foreach (DetectedObjectPanel panel in _panels)
        {
            Destroy(panel.gameObject);
        }
    }
}
