using UnityEngine;
using UnityEngine.Events;

namespace Chiligames.MixedRealityTemplate
{
    public class UIToggle : UIButton
    {
        public UnityEvent OnToggleLeft;
        public UnityEvent OnToggleRight;
        [SerializeField] private Transform toggleCircle;

        private bool left = true;

        private void Start()
        {
            if (left)
            {
                OnToggleLeft?.Invoke();
                tweener.LocalMove(toggleCircle, new Vector3(-400, 0, 0), 0.15f);
            }
        }

        public override void ButtonAction()
        {
            if (left)
            {
                OnToggleRight?.Invoke();
                left = false;
                tweener.LocalMove(toggleCircle, new Vector3(400, 0, 0), 0.15f);
            }
            else
            {
                OnToggleLeft?.Invoke();
                left = true;
                tweener.LocalMove(toggleCircle, new Vector3(-400, 0, 0), 0.15f);
            }
            PlaySound();

            tweener.Timer(_deactivateAfterActionTime, () => { _enabled = true; });
        }
    }
}
