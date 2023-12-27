using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Chiligames.MixedRealityTemplate
{
	[RequireComponent(typeof(BoxCollider))]
	public class UIButton : MonoBehaviour
	{
		[SerializeField] protected bool _enableOnStart = true;

		protected Tweener tweener;
		private Image _icon;

		[SerializeField] protected float _deactivateAfterActionTime = 0.4f;

		[SerializeField] protected Color _colorDisabled = new Color(1.000f, 1.000f, 1.000f, 0.3f);
		[SerializeField] protected Color _colorEnabled = new Color(1.000f, 1.000f, 1.000f, 0.7f);

		[SerializeField] private AudioSource _audioSource;
		[SerializeField] private AudioClip _buttonClip;

		public bool Enabled => _enabled;

		protected Vector3 _initialScale;

		[SerializeField] protected bool _enabled = true;

		public UnityEvent OnClicked;

		protected virtual void Awake()
		{
			_icon = GetComponentInChildren<Image>();
			tweener = FindObjectOfType<Tweener>();
			_initialScale = transform.localScale;
			Enable(_enableOnStart);
			UpdateColor();
		}

		private void OnTriggerEnter(Collider other)
		{
			if (!_enabled) return;
			Interactor interactor = other.gameObject.GetComponent<Interactor>();
			if (interactor)
			{
				_enabled = false;
				ButtonAction();
			}
		}

		public virtual void ButtonAction()
		{
			transform.localScale = _initialScale * 1.1f;
			tweener.Scale(transform, _initialScale, 0.1f);

			OnClicked?.Invoke();
			PlaySound();

			tweener.Timer(_deactivateAfterActionTime, () => { _enabled = true; });
		}

		public void Enable(bool enable)
		{
			_enabled = enable;
			UpdateColor();
		}

		public void UpdateColor()
		{
			SetColor(_enabled ? _colorEnabled : _colorDisabled);
		}

		public void SetColor(Color color)
		{
			if (_icon)
			{
				_icon.color = color;
			}
		}

		protected virtual void PlaySound()
		{
			if (_audioSource != null && _buttonClip != null)
			{
				_audioSource.PlayOneShot(_buttonClip, 1.0f);
			}
		}
	}
}
