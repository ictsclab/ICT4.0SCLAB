using UnityEngine;
using Photon.Pun;

/// <summary>
/// Hand menu functionality.
/// </summary>
namespace Chiligames.MixedRealityTemplate
{
	public class HandUI : MonoBehaviourPunCallbacks
	{
		[SerializeField] private Transform target;
		private Tweener tweener;
        
		[Space]
		[SerializeField] private Transform pivot;
		[SerializeField] private Transform panel;
		[SerializeField] private UIWindow window;

		[Space]
		[SerializeField] private UIButton buttonOpen;
		[SerializeField] private UIButton buttonClose;

		private Transform centerEyeAnchor;

		private bool isFacing = false;
		private bool panelOpened = false;
		private bool panelMoving = false;

		private Vector3 panelInitialScale;
		private Vector3 buttonOpenInitialScale;

		private readonly Vector3 openRotation = new Vector3(20, 0, 0);

		private void Awake()
		{
			centerEyeAnchor = FindObjectOfType<CenterEyeAnchor>().transform;
			tweener = FindObjectOfType<Tweener>();
		}

		private void Start()
		{
			Initialize();
		}

		private void Initialize()
		{
			InitializePanel();
			
			transform.parent = target;
			transform.localPosition = Vector3.zero;
			transform.localRotation = Quaternion.identity;

			buttonOpen.OnClicked.AddListener(OpenPanel);
			buttonClose.OnClicked.AddListener(ClosePanel);
		}

		private void Update()
		{
			CheckFacing();

			if (isFacing && !panelOpened && !panelMoving)
			{
				OpenPanel();
			}

			if (!isFacing && panelOpened && !panelMoving)
			{
				ClosePanel();
			}
		}

		private void CheckFacing()
		{
			Vector3 forward = transform.forward;
			Vector3 toOther = (centerEyeAnchor.position - transform.position).normalized;

			//Check if hand palm is facing towards head
			isFacing = Vector3.Dot(forward, toOther) > 0.1f;
		}

		private void InitializePanel()
		{
			panel.gameObject.SetActive(false);
			pivot.localRotation = Quaternion.Euler(0, 0, 0);
			panelInitialScale = panel.localScale;
			panel.localScale = panelInitialScale * 0.01f;
			buttonOpenInitialScale = buttonOpen.transform.localScale;
			window.Close();
		}

		private void OpenPanel()
		{
			if (panelMoving) return;
			panelMoving = true;
			panel.gameObject.SetActive(true);
			window.Open();
			tweener.LocalRotate(pivot, openRotation, 0.25f, () => {
				panelMoving = false;
				panelOpened = true;
			});
			tweener.Scale(panel, panelInitialScale, 0.2f);
		}

		private void ClosePanel()
		{
			if (panelMoving) return;
			window.Close();
			tweener.Scale(buttonOpen.transform, buttonOpenInitialScale, 0.01f, () =>
			{
				buttonOpen.gameObject.SetActive(true);
			});
			
			panelMoving = true;
			tweener.LocalRotate(pivot, Vector3.zero, 0.01f, () => {
						panel.gameObject.SetActive(false);
						panelMoving = false;
						panelOpened = false;
					});
			tweener.Scale(panel, panelInitialScale * 0.01f, 0.01f);
		}

		private void OnDestroy()
		{
			buttonOpen.OnClicked.RemoveListener(OpenPanel);
			buttonClose.OnClicked.RemoveListener(ClosePanel);
		}
	}
}