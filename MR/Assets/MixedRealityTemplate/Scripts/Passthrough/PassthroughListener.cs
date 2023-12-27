using UnityEngine;
using UnityEngine.Events;

/// <summary>
/// Class that listens to the passthrough state change. Events can be wired on the editor to create different behaviours, for example, the mirror that turns into a window to passthrough.
/// </summary>
namespace Chiligames.MixedRealityTemplate
{
    public class PassthroughListener : MonoBehaviour
    {
        public UnityEvent OnPassthroughEnabled;
        public UnityEvent OnPassthroughDisabled;

        void Start()
        {
            PassthroughManager.instance.OnPassthroughEnabled.AddListener(PassthroughEnabled);
            PassthroughManager.instance.OnPassthroughDisabled.AddListener(PassthroughDisabled);
        }

        private void PassthroughEnabled()
        {
            OnPassthroughEnabled.Invoke();
        }

        private void PassthroughDisabled()
        {
            OnPassthroughDisabled.Invoke();
        }

        private void OnDestroy()
        {
            PassthroughManager.instance.OnPassthroughEnabled.RemoveListener(PassthroughEnabled);
            PassthroughManager.instance.OnPassthroughDisabled.RemoveListener(PassthroughDisabled);
        }
    }
}
