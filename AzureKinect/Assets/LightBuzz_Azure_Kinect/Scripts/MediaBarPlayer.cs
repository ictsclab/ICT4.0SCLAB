/**
 *
 * @brief 사용할 필요 없음!!
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using LightBuzz.Kinect4Azure.Video;
using UnityEngine;
using UnityEngine.Events;

namespace LightBuzz.Kinect4Azure
{
    /// <summary>
    /// Connects the Azure SDK to the media bar.
    /// </summary>
    [System.Serializable]
    public class MediaBarPlayer
    {
        private VideoPlayer player;
        [SerializeField] private MediaBar mediaBar;

        private bool initialized = false;

        public bool IsPlaying => player != null && player.IsPlaying;

        public VideoFrameEvent OnFrameShown;

        /// <summary>
        /// Loads the directory of the frames.
        /// Updates the total time of the video.
        /// </summary>
        /// <param name="directory"></param>
        public void LoadVideo(string directory)
        {
            if (!initialized)
            {
                mediaBar.OnLoopChangedEvent.AddListener(OnLoopChanged);
                mediaBar.OnSpeedChangedEvent.AddListener(OnSpeedChanged);
                mediaBar.OnPauseChangedEvent.AddListener(OnPauseChanged);
                mediaBar.OnSliderChangedEvent.AddListener(OnSliderChanged);

                initialized = true;
            }

            if (player == null)
            {
                player = new VideoPlayer
                {
                    Folder = directory
                };
            }
            else
            {
                player.Folder = directory;
            }

            mediaBar.UpdateTotalTime(player.Duration);
        }

        private void OnSliderChanged(float arg0)
        {
            player.Seek = arg0;
        }

        private void OnPauseChanged(bool arg0)
        {
            player.IsPaused = arg0;

            // If was paused but now playing
            if (!player.IsPaused)
            {
                // if at the end of seek
                if (player.Seek == 1f)
                {
                    // start again.
                    player.Seek = 0f;
                }
            }
        }

        private void OnSpeedChanged(float arg0)
        {
            player.Speed = arg0;
        }

        private void OnLoopChanged(bool arg0)
        {
            player.Loop = arg0;
        }

        /// <summary>
        /// Retrieves the next frame if the video is playing. Otherwise returns null.
        /// Updates the media bar.
        /// </summary>
        /// <returns></returns>
        public Frame Update()
        {
            if (!player.IsPlaying)
            {
                return null;
            }

            Frame frame = player.Update();

            mediaBar.UpdateSeek(player.Seek, player.TimeElapsed);

            InvokeVideoFrameEvent(frame);

            // Check if video has finished
            if (mediaBar.Seek == 1f)
            {
                // and not looping
                if (!player.Loop)
                {
                    // so pause it
                    Pause();
                }
            }

            return frame;
        }

        private void InvokeVideoFrameEvent(Frame frame)
        {
            if (OnFrameShown == null || OnFrameShown.GetPersistentEventCount() == 0) return;

            FrameInfo frameInfo = new FrameInfo();

            for (int i = 0; i < player.Timestamps.Count; i++)
            {
                if (frame.Timestamp == player.Timestamps[i])
                {
                    frameInfo.frameIndex = i;
                    break;
                }
            }

            OnFrameShown?.Invoke(frameInfo);
        }

        /// <summary>
        /// Starts the video player.
        /// </summary>
        public void Play()
        {
            mediaBar.gameObject.SetActive(true);

            player.Start();
            player.IsPaused = false;
            mediaBar.Play();
        }

        /// <summary>
        /// Calls pause from the media bar which will fire an event to update player
        /// </summary>
        public void Pause()
        {
            if (player.IsPlaying)
            {
                //player.Stop();
                mediaBar.Pause();
            }
        }

        /// <summary>
        /// Stops the video player.
        /// </summary>
        public void Stop()
        {
            mediaBar.gameObject.SetActive(false);

            player?.Stop();
        }

        public void Dispose()
        {
            player?.Dispose();
        }
    }

    public struct FrameInfo
    {
        public int frameIndex;
    }

    [System.Serializable]
    public class VideoFrameEvent : UnityEvent<FrameInfo>
    { }
}
