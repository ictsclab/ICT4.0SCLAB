using System;
using System.Collections;
using UnityEngine;

/// <summary>
/// Tweener methods to easily animate UI, Transforms, etc.
/// </summary>
namespace Chiligames.MixedRealityTemplate
{
    public class Tweener : MonoBehaviour
    {
        /// <summary>
        /// Tweens the property of a material to "target" value over period of time.
        /// </summary>
        /// <param name="mat"></param>
        /// <param name="property"></param>
        /// <param name="target"></param>
        /// <param name="time"></param>
        /// <param name="OnComplete"></param>
        public void SetMaterialFloat(Material mat, string property, float target, float time, Action OnComplete = null)
        {
            StartCoroutine(SetMaterialFloatTween(mat, property, target, time, OnComplete));
        }

        IEnumerator SetMaterialFloatTween(Material mat, string property, float target, float time, Action OnComplete)
        {
            float initialValue = mat.GetFloat(property);
            for (float i = 0; i < time; i += Time.deltaTime)
            {
                mat.SetFloat(property, Mathf.Lerp(initialValue, target, i / time));
                yield return null;
            }
            mat.SetFloat(property, target);
            OnComplete?.Invoke();
        }

        /// <summary>
        /// Tweens the alpha value of a material color to "targetAlpha" value (from 0 to 1) over period of time.
        /// </summary>
        /// <param name="mat"></param>
        /// <param name="targetAlpha"></param>
        /// <param name="time"></param>
        /// <param name="OnComplete"></param>
        public void FadeMaterialColor(Material mat, float targetAlpha, float time, Action OnComplete = null)
        {
            StartCoroutine(FadeMaterialColorTween(mat, targetAlpha, time, OnComplete));
        }

        IEnumerator FadeMaterialColorTween(Material mat, float targetAlpha, float time, Action OnComplete)
        {

            var color = mat.GetColor("_Color");
            var targetColor = new Color(color.r, color.g, color.b, targetAlpha);
            for (float i = 0; i < time; i += Time.deltaTime)
            {
                mat.SetColor("_Color", Color.Lerp(color, targetColor, i / time));
                yield return null;
            }
            mat.SetColor("_Color", targetColor);
            OnComplete?.Invoke();
        }

        /// <summary>
        /// Tweens the local position of a GameObject to "targetPos" value over period of time.
        /// </summary>
        /// <param name="transform"></param>
        /// <param name="targetPos"></param>
        /// <param name="time"></param>
        /// <param name="OnComplete"></param>
        public void LocalMove(Transform transform, Vector3 targetPos, float time, Action OnComplete = null)
        {
            StartCoroutine(LocalMoveTween(transform, targetPos, time, OnComplete));
        }

        IEnumerator LocalMoveTween(Transform transform, Vector3 targetPos, float time, Action OnComplete = null)
        {
            Vector3 initialPos = transform.localPosition;
            for (float i = 0; i < time; i += Time.deltaTime)
            {
                transform.localPosition = Vector3.Lerp(initialPos, targetPos, i / time);
                yield return null;
            }
            transform.localPosition = targetPos;
            OnComplete?.Invoke();
        }

        /// <summary>
        /// Tweens the local scale of a GameObject to "targetScale" value over period of time.
        /// </summary>
        /// <param name="transform"></param>
        /// <param name="targetScale"></param>
        /// <param name="time"></param>
        /// <param name="OnComplete"></param>
        public void Scale(Transform transform, Vector3 targetScale, float time, Action OnComplete = null)
        {
            StartCoroutine(ScaleTween(transform, targetScale, time, OnComplete));
        }

        IEnumerator ScaleTween(Transform transform, Vector3 targetScale, float time, Action OnComplete = null)
        {
            Vector3 initialScale = transform.localScale;
            for (float i = 0; i < time; i += Time.deltaTime)
            {
                transform.localScale = Vector3.Lerp(initialScale, targetScale, i / time);
                yield return null;
            }
            transform.localScale = targetScale;
            OnComplete?.Invoke();
        }

        /// <summary>
        /// Timer to delay actions.
        /// </summary>
        /// <param name="time"></param>
        /// <param name="OnComplete"></param>
        public void Timer(float time, Action OnComplete = null)
        {
            StartCoroutine(TimerTween(time, OnComplete));
        }

        IEnumerator TimerTween(float time, Action OnComplete = null)
        {
            yield return new WaitForSeconds(time);
            OnComplete?.Invoke();
        }

        /// <summary>
        /// Tweens the local rotation of a GameObject to "targetRotation" value over period of time.
        /// </summary>
        /// <param name="pivot"></param>
        /// <param name="targetRotation"></param>
        /// <param name="time"></param>
        /// <param name="OnComplete"></param>
        public void LocalRotate(Transform pivot, Vector3 targetRotation, float time, Action OnComplete = null)
        {
            StartCoroutine(LocalRotateTween(pivot, targetRotation, time, OnComplete));
        }

        IEnumerator LocalRotateTween(Transform pivot, Vector3 targetRotation, float time, Action OnComplete = null)
        {
            Vector3 initialRotation = pivot.localRotation.eulerAngles;
            for (float i = 0; i < time; i += Time.deltaTime)
            {
                pivot.localRotation = Quaternion.Euler(Vector3.Lerp(initialRotation, targetRotation, i / time));
                yield return null;
            }
            transform.localRotation = Quaternion.Euler(targetRotation);
            OnComplete?.Invoke();
        }

        /// <summary>
        /// Tweens the local rotation of a GameObject to "targetRotation" value over period of time.
        /// </summary>
        /// <param name="pivot"></param>
        /// <param name="targetRotation"></param>
        /// <param name="time"></param>
        /// <param name="OnComplete"></param>
        public void Rotate(Transform pivot, Quaternion targetRotation, float time, Action OnComplete = null)
        {
            StartCoroutine(RotateTween(pivot, targetRotation, time, OnComplete));
        }

        IEnumerator RotateTween(Transform pivot, Quaternion targetRotation, float time, Action OnComplete = null)
        {
            Quaternion initialRotation = pivot.rotation;
            for (float i = 0; i < time; i += Time.deltaTime)
            {
                pivot.rotation = Quaternion.Slerp(initialRotation, targetRotation, i / time);
                yield return null;
            }
            transform.rotation = targetRotation;
            OnComplete?.Invoke();
        }
    }
}
