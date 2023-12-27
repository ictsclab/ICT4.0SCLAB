using System.IO;
using LightBuzz.Kinect4Azure;
using Microsoft.Azure.CognitiveServices.Vision.ComputerVision;
using Microsoft.Azure.CognitiveServices.Vision.ComputerVision.Models;
using UnityEngine;

public class Demo_Kinect4Azure_CognitiveServices : MonoBehaviour
{
    [Header("Kinect")]
    [SerializeField] private Configuration _configuration;
    [SerializeField] private UniformImage _image;

    [Header("Azure Cognitive Services")]
    [SerializeField] private string _visionApiKey = "8991690980884ab6b2a8188c542a77c7";
    [SerializeField] private string _visionEndpoint = "https://lightbuzzcomputervision.cognitiveservices.azure.com/";
    [SerializeField] private DetectedObjectPanelManager _detectedObjectPanelManager;

    private KinectSensor _sensor;
    private ComputerVisionClient _client;
    private bool _isRunning = false;

    private void Start()
    {
        Debug.Log("IMPORTANT: Remember to use your own Vision API Key and Vision Endpoint! Get your free key here: https://lightbuzz.com/azure-cognitive-services/");

        _sensor = KinectSensor.Create(_configuration);

        if (_sensor == null)
        {
            Debug.LogError("Sensor not connected!");
            return;
        }

        _sensor.Open();

        _client = new ComputerVisionClient(new ApiKeyServiceClientCredentials(_visionApiKey))
        {
            Endpoint = _visionEndpoint
        };
    }

    private void Update()
    {
        if (_sensor == null || !_sensor.IsOpen) return;

        Frame frame = _sensor.Update();

        if (frame?.ColorFrameSource != null && frame?.DepthFrameSource != null)
        {
            _image.Load(frame.ColorFrameSource);

            DetectObjects(frame.ColorFrameSource);
        }
    }

    private void OnDestroy()
    {
        _sensor?.Close();
        _client?.Dispose();
    }

    private async void DetectObjects(ColorFrameSource colorFrame)
    {
        if (_isRunning) return;

        try
        {
            _isRunning = true;

            using (Stream stream = new MemoryStream(Jpeg.Encode(colorFrame.Data, colorFrame.Width, colorFrame.Height)))
            {
                DetectResult result = await _client.DetectObjectsInStreamAsync(stream);
                
                _detectedObjectPanelManager?.Load(result.Objects, _sensor.CoordinateMapper);
            }

            _isRunning = false;
        }
        catch
        {
            // Ignored.
        }
    }

    public void OnButtonClick()
    {
        Application.OpenURL("https://lightbuzz.com/azure-cognitive-services/");
    }
}
