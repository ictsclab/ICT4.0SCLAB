/**
 *
 * @brief Azure Kinect Video 화면을 생성해주는 Default 코드
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using LightBuzz.Kinect4Azure.Video;
using System.IO;
using UnityEngine;
using UnityEngine.UI;

namespace LightBuzz.Kinect4Azure
{
    public class Demo_Kinect4Azure_Video : MonoBehaviour
    {
        [SerializeField] private Configuration _configuration;
        [SerializeField] private UniformImage _image;
        [SerializeField] private StickmanManager _stickmanManager;

        [SerializeField] private Image startStopBtnImg;
        [SerializeField] private Sprite[] startStopSprites;
        private bool isRecording = false;

        [SerializeField] private MediaBarPlayer mediaBarPlayer;
        [SerializeField] private GameObject recordingPanel;
        [SerializeField] private GameObject backBtnGO;

        private bool stopPlayback = false;
        private bool showSavingPanel = false;
        [SerializeField] private GameObject savingPanelGO;

        private KinectSensor _sensor;
        private VideoRecorder _recorder;

        private void Start()
        {
            _sensor = KinectSensor.Create(_configuration);

            if (_sensor == null)
            {
                Debug.LogError("Sensor not connected!");
                return;
            }

            _sensor.Open();

            _recorder = new VideoRecorder(new VideoConfiguration
            {
                Path = Path.Combine(Application.persistentDataPath, "Video"),
                ColorResolution = _sensor.Configuration.ColorResolution.Size(),
                DepthResolution = _sensor.Configuration.DepthMode.Size(),
                RecordColor = true,
                RecordDepth = false,
                RecordBody = true,
                RecordFloor = false,
                RecordIMU = false
            });

            _recorder.OnRecordingStarted += OnRecordingStarted;
            _recorder.OnRecordingStopped += OnRecordingStopped;
            _recorder.OnRecordingCompleted += OnRecordingCompleted;

            Debug.Log("Video will be saved at " + _recorder.Configuration.Path);
        }

        private void OnRecordingCompleted()
        {
            Debug.Log("Recording completed");

            showSavingPanel = false;
        }

        private void OnRecordingStopped()
        {
            Debug.Log("Recording stopped");

            showSavingPanel = true;
        }

        private void OnRecordingStarted()
        {
            Debug.Log("Recording started");

            stopPlayback = true;
        }

        private void Update()
        {
            if (stopPlayback)
            {
                mediaBarPlayer.Stop();

                stopPlayback = false;
            }

            if (savingPanelGO.activeSelf != showSavingPanel)
            {
                savingPanelGO.SetActive(showSavingPanel);

                // Playback
                if (!showSavingPanel)
                {
                    mediaBarPlayer.LoadVideo(_recorder.Configuration.Path);
                    mediaBarPlayer.Play();
                    backBtnGO.SetActive(true);
                    recordingPanel.SetActive(false);
                }
            }

            UpdateFrame();
        }

        private void OnDestroy()
        {
            _sensor?.Close();

            _recorder.OnRecordingStarted -= OnRecordingStarted;
            _recorder.OnRecordingStopped -= OnRecordingStopped;
            _recorder.OnRecordingCompleted -= OnRecordingCompleted;
            _recorder.Dispose();

            mediaBarPlayer.Dispose();
        }

        private void UpdateFrame()
        {
            Frame frame = null;

            if (mediaBarPlayer.IsPlaying)
            {
                frame = mediaBarPlayer.Update();
            }
            else if (_sensor != null && _sensor.IsOpen)
            {
                frame = _sensor.Update();
            }

            if (frame != null)
            {
                if (frame.ColorFrameSource != null)
                {
                    _image.Load(frame.ColorFrameSource);
                }

                if (frame.BodyFrameSource != null)
                {
                    _stickmanManager.Load(frame.BodyFrameSource.Bodies);
                }
            }

            _recorder?.Update(frame);
        }

        public void BackToRecording()
        {
            mediaBarPlayer.Stop();
            recordingPanel.SetActive(true);
            backBtnGO.SetActive(false);
        }

        public void StartStopRecording()
        {
            isRecording = !isRecording;
            startStopBtnImg.sprite = startStopSprites[isRecording ? 1 : 0];

            if (isRecording)
                _recorder.Start();
            else
                _recorder.Stop();
        }
    }
}
