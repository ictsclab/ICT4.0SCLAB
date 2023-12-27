using System;
using UnityEngine;
using UnityEngine.UI;

namespace LightBuzz.Kinect4Azure
{
    public class HandButton : Button
    {
        [SerializeField][Tooltip("The time to wait until the click.")] private float _hoverTime = 1.5f;

        private bool _wasHover = false;
        private DateTime _hoverStart = DateTime.MinValue;

        public void Load(HandCursor cursor)
        {
            bool isHover = IsHover(cursor);

            if (isHover)
            {
                if (!_wasHover)
                {
                    _hoverStart = DateTime.Now;
                }

                if ((DateTime.Now - _hoverStart).TotalSeconds >= _hoverTime)
                {
                    onClick?.Invoke();

                    isHover = false;

                    _hoverStart = DateTime.Now;
                }
            }

            Vector3 scale = transform.localScale;
            float increase = scale.x + 0.01f;

            transform.localScale = new Vector3(isHover ? increase : 1.0f, isHover ? increase : 1.0f, isHover ? increase : 1.0f);

            _wasHover = isHover;
        }

        public bool IsHover(HandCursor cursor)
        {
            Vector2 cursorPosition = cursor.transform.localPosition;
            Vector2 buttonPosition = transform.localPosition;
            RectTransform buttonTransform = gameObject.transform as RectTransform;

            float minX = buttonPosition.x - buttonTransform.rect.width / 2.0f;
            float maxX = buttonPosition.x + buttonTransform.rect.width / 2.0f;
            float minY = buttonPosition.y - buttonTransform.rect.height / 2.0f;
            float maxY = buttonPosition.y + buttonTransform.rect.height / 2.0f;

            return
                cursorPosition.x >= minX &&
                cursorPosition.x <= maxX &&
                cursorPosition.y >= minY &&
                cursorPosition.y <= maxY;
        }
    }
}