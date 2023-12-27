using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;


namespace LightBuzz.Kinect4Azure
{
    /// <summary>
    /// Handles the media bar.
    /// </summary>
    public class MediaBar : MonoBehaviour
    {
        [SerializeField] private Slider seekSlider;
        [SerializeField] private Text totalTimeTxt;
        [SerializeField] private Text elapsedTimeTxt;

        [SerializeField] private Image playPauseImg;
        ///<summary>[Tooltip("Sprites for play/pause button in order of [pause, play]")]</summary>
        [Tooltip("Sprites for play/pause button in order of [pause, play]")]
        [SerializeField] private Sprite[] playPauseSprites;

        /// <summary>If the video is playing.</summary>
        private bool isPlaying = true;
        /// <summary>If the video is playing. Updates the play/pause button</summary>
        public bool IsPlaying
        {
            get { return isPlaying; }
            set
            {
                isPlaying = value;
                UpdatePlayPauseButton();
            }
        }

        /// <summary>
        /// Returns the position the slider is at.
        /// </summary>
        public float Seek
        {
            get { return seekSlider.value; }
        }

        /// <summary>When true the video loops. Otherwise it stops at the end.</summary>
        private bool isLoopEnabled;
        ///<summary>When true the mouse is inside the slider.</summary>
        protected bool isMouseInside = false;
        ///<summary>When true slider is updated manually.</summary>
        private bool updatingSlider = false;

        [SerializeField] private MediaBarOptionsPanel optionsPanel;

        public LoopChangedEvent OnLoopChangedEvent;
        public SpeedChangedEvent OnSpeedChangedEvent;
        public PauseChangedEvent OnPauseChangedEvent;
        public SliderChangedEvent OnSliderChangedEvent;

        private void UpdatePlayPauseButton()
        {
            playPauseImg.sprite = playPauseSprites[isPlaying ? 0 : 1];
        }

        protected void Start()
        {
            seekSlider.onValueChanged.AddListener(OnSliderValueChanged);

            optionsPanel.onSpeedChanged.AddListener(OnSpeedPlaybackChanged);
            optionsPanel.onLoopChanged.AddListener(OnLoopChanged);
        }

        private void OnDestroy()
        {
            seekSlider.onValueChanged.RemoveListener(OnSliderValueChanged);

            optionsPanel.onSpeedChanged.RemoveListener(OnSpeedPlaybackChanged);
            optionsPanel.onLoopChanged.RemoveListener(OnLoopChanged);
        }

        /// <summary>
        /// Updates the slider according to the displayed frame.
        /// Updates the elapsed time text.
        /// </summary>
        /// <param name="ratio"></param>
        /// <param name="timeSpan"></param>
        public void UpdateSeek(float ratio, TimeSpan timeSpan)
        {
            if (seekSlider.value != ratio)
            {
                if (!updatingSlider)
                {
                    seekSlider.value = ratio;
                }
                else
                {
                    if (!Input.GetMouseButton(0))
                    {
                        updatingSlider = false;
                    }
                }
                elapsedTimeTxt.text = timeSpan.ToString(@"mm\:ss");
            }
        }

        public void UpdateTotalTime(TimeSpan timeSpan)
        {
            totalTimeTxt.text = timeSpan.ToString(@"mm\:ss");
        }

        /// <summary>
        /// Checks if the mouse changed the slider.
        /// Registers the manual change.
        /// Invokes event.
        /// </summary>
        /// <param name="arg0"></param>
        private void OnSliderValueChanged(float arg0)
        {
            if (isMouseInside && Input.GetMouseButton(0))
            {
                Pause();
                updatingSlider = true;
                OnSliderChangedEvent?.Invoke(arg0);
            }
        }

        private void OnSpeedPlaybackChanged(float arg0)
        {
            OnSpeedChangedEvent?.Invoke(arg0);
        }

        private void OnLoopChanged(bool arg0)
        {
            isLoopEnabled = arg0;

            OnLoopChangedEvent?.Invoke(isLoopEnabled);
        }

        public void OnPointerEnter(BaseEventData eventData)
        {
            isMouseInside = true;
        }

        public void OnPointerExit(BaseEventData eventData)
        {
            isMouseInside = false;
        }

        /// <summary>
        /// Changes play to pause and inverse.
        /// Invokes event for the change.
        /// </summary>
        public void PlayPause()
        {
            IsPlaying = !IsPlaying;

            OnPauseChangedEvent?.Invoke(!isPlaying);
        }

        /// <summary>
        /// If media bar is not playing it starts.
        /// </summary>
        public void Play()
        {
            if (!IsPlaying)
            {
                PlayPause();
            }
        }

        /// <summary>
        /// If media bar is  playing it pauses.
        /// </summary>
        public void Pause()
        {
            if (IsPlaying)
            {
                PlayPause();
            }
        }

        /// <summary>
        /// Reverts the visibility of the options panel.
        /// </summary>
        public void ShowHideOptionsPanel()
        {
            optionsPanel.gameObject.SetActive(!optionsPanel.gameObject.activeSelf);
        }
    }

    [System.Serializable]
    public class LoopChangedEvent : UnityEvent<bool>
    {
    }

    [System.Serializable]
    public class SpeedChangedEvent : UnityEvent<float>
    {
    }

    [System.Serializable]
    public class PauseChangedEvent : UnityEvent<bool>
    {
    }

    [Serializable]
    public class SliderChangedEvent : UnityEvent<float>
    {
    }
}
