using System;
using UnityEngine;
using UnityEngine.UI;

namespace LightBuzz.Kinect4Azure
{
    [RequireComponent(typeof(Image))]
    [RequireComponent(typeof(AspectRatioFitter))]
    [Serializable]
    public class UniformImage : MonoBehaviour
    {
        [SerializeField] protected bool _flipVertically = true;
        [SerializeField] protected bool _flipHorizontally = false;

        public bool FlipVertically
        {
            get => _flipVertically;
            set => _flipVertically = value;
        }

        public bool FlipHorizontally
        {
            get => _flipHorizontally;
            set => _flipHorizontally = value;
        }

        protected RectTransform rectTransform;
        protected Canvas canvas;
        protected Image image;
        protected AspectRatioFitter arf;
        protected Sprite sprite;
        protected Texture2D texture;

        protected DepthVisualization depthVisualization;

        public int Width { get; protected set; }
        public int Height { get; protected set; }

        public void Load(ColorFrameSource source)
        {
            Load(source.Data, source.Width, source.Height);

        }

        public void Load(DepthFrameSource source, ushort maxDepth = 8000, DepthVisualization visualization = DepthVisualization.Grayscale)
        {
            depthVisualization = visualization;

            Load(source.Data, source.Width, source.Height, maxDepth);
        }

        public void Load(byte[] data, int width, int height, TextureFormat format = TextureFormat.RGB24)
        {
            Create(width, height, format);

            texture.LoadRawTextureData(data);
            texture.Apply();
        }

        public void Load(Color32[] data, int width, int height, TextureFormat format = TextureFormat.RGBA32)
        {
            Create(width, height, format);

            texture.SetPixels32(data);
            texture.Apply();
            
        }

        public void Load(ushort[] data, int width, int height, ushort maxDepth = 6000)
        {
            const int channels = 3;

            float minOld = 0.0f;
            float maxOld = (float)maxDepth;
            float minNew = depthVisualization == DepthVisualization.Jet ? -1.0f : 0.0f;
            float maxNew = depthVisualization == DepthVisualization.Jet ? 1.0f : 255.0f;

            byte[] pixels = new byte[data.Length * channels];

            for (int i = 0; i < data.Length; i++)
            {
                ushort depth = data[i];
                float value = (float)depth;

                float red = 0.0f;
                float green = 0.0f;
                float blue = 0.0f;

                if (depth != 0)
                {
                    if (depthVisualization == DepthVisualization.Jet)
                    {
                        float t = (((value - minOld) * (maxNew - minNew)) / (maxOld - minOld)) + minNew;

                        red = Mathf.Clamp01(1.5f - Mathf.Abs(2.0f * t - 1.0f)) * 255.0f;
                        green = Mathf.Clamp01(1.5f - Mathf.Abs(2.0f * t)) * 255.0f;
                        blue = Mathf.Clamp01(1.5f - Mathf.Abs(2.0f * t + 1.0f)) * 255.0f;
                    }
                    else
                    {
                        red = green = blue = value / maxOld * maxNew;
                    }
                }

                pixels[i * channels + 0] = (byte)red;
                pixels[i * channels + 1] = (byte)green;
                pixels[i * channels + 2] = (byte)blue;
            }

            Load(pixels, width, height);
        }

        /// <summary>
        /// Calculates the position in the local space of the image.
        /// </summary>
        /// <param name="point"></param>
        /// <returns></returns>
        public Vector2 GetPosition(Vector2 point)
        {
            // Calculate local position
            Vector3 pos = Vector3.zero;
            Transform t = transform;
            bool hasParent = t.parent != null;
            while (hasParent)
            {
                pos += t.localPosition;
                t = t.parent;
                hasParent = t.parent != null;
            }

            float scaledWidth = image.rectTransform.rect.width * image.transform.localScale.x;
            float scaledHeight = image.rectTransform.rect.height * image.transform.localScale.y;

            return new Vector2(
                (point.x / Width * scaledWidth - scaledWidth * 0.5f) + pos.x,
                (point.y / Height * scaledHeight - scaledHeight * 0.5f) + pos.y);
            
        }

        private void Create(int width, int height, TextureFormat format)
        {
            if (texture == null || texture.width != width || texture.height != height)
            {
                texture = new Texture2D(width, height, format, false);

                canvas = FindObjectOfType<Canvas>();
                image = GetComponent<Image>();
                arf = GetComponent<AspectRatioFitter>();
                rectTransform = (RectTransform)transform;

                Width = texture.width;
                Height = texture.height;

                sprite = Sprite.Create(texture, new Rect(0, 0, Width, Height), new Vector2(0.5f, 0.5f));

                rectTransform.sizeDelta = new Vector2(Width, Height);

                image.sprite = sprite;
                arf.aspectRatio = Width / (float)Height;
            }

            transform.localScale = new Vector3(_flipHorizontally ? -1.0f : 1.0f, _flipVertically ? -1.0f : 1.0f, 1.0f);
        }
    }
}
