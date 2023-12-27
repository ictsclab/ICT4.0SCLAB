using UnityEngine;

/// <summary>
/// General UI Window behaviour, that has a header, content and background elements.
/// </summary>
namespace Chiligames.MixedRealityTemplate
{
	public class UIWindow : MonoBehaviour
	{
		[SerializeField] private Transform background;
		[SerializeField] private Transform header;
		[SerializeField] private Transform content;

		private Tweener tweener;

		private readonly Vector3 closedBackgroundScale = new Vector3(0.01f, 1, 1);

		private void Awake()
		{
			tweener = FindObjectOfType<Tweener>();
		}

		public void Open()
		{
			background.gameObject.SetActive(true);

			tweener.Scale(background, Vector3.one, 0.2f, () =>
			{
				header.gameObject.SetActive(true);
				content.gameObject.SetActive(true);
			});
			tweener.Scale(header, Vector3.one, 0.2f);
			tweener.Scale(content, Vector3.one, 0.2f);
		}
	
		public void Close()
		{
			tweener.Scale(background, closedBackgroundScale, 0.2f, () =>
			{
				background.gameObject.SetActive(false);
			});
			tweener.Scale(header, Vector3.one * 0.01f, 0.2f, () =>
			{
				header.gameObject.SetActive(false);
			});
			tweener.Scale(content, Vector3.one * 0.0001f, 0.2f, () =>
			{
				content.gameObject.SetActive(false);
			});
		}
	}
}
