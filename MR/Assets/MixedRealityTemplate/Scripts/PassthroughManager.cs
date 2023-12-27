using Photon.Pun;
using UnityEngine;
using UnityEngine.Events;

namespace Chiligames.MixedRealityTemplate
{
    public class PassthroughManager : MonoBehaviourPun
    {
        public static PassthroughManager instance;

        //Events to listen when global passthrough is enabled/disabled
        public UnityEvent OnPassthroughEnabled;
        public UnityEvent OnPassthroughDisabled;

        //These are the objects are hidden when passthrough is enabled
        [SerializeField] Transform[] environmentObjectsToFade;
        private Vector3[] objectsToFadeInitialScales;

        //Reference to the Tweener
        private Tweener tweener;

        //This is the passthrough material that is applied to meshes when we touch them with the "Versatool"
        public Material passthroughMaterial;

        //Inside out sphere that surrounds the environment with a passthrough material, whihch is enabled when we turn on passthrough.
        [SerializeField] private GameObject passthroughSphere;

        //Initialization
        private void Awake()
        {
            if (instance != null && instance != this)
            {
                Destroy(this.gameObject);
            }
            else
            {
                instance = this;
            }

            tweener = FindObjectOfType<Tweener>();

            objectsToFadeInitialScales = new Vector3[environmentObjectsToFade.Length];

            for (int i = 0; i < objectsToFadeInitialScales.Length; i++)
            {
                objectsToFadeInitialScales[i] = environmentObjectsToFade[i].localScale;
            }
        }

        //To enable global passthorugh. This is not networked, as it's more like a personal decission of the user to be in passthrough or not.
        public void PassthroughEnabled()
        {
            OnPassthroughEnabled.Invoke();
            FadeOutEnvironment();
            passthroughSphere.SetActive(true);
        }

        //To disable global passthorugh. This is not networked, as it's more like a personal decission of the user to be in passthrough or not.
        public void PassthroughDisabled()
        {
            OnPassthroughDisabled.Invoke();
            FadeInEnvironment();
            passthroughSphere.SetActive(false);
        }

        private void FadeOutEnvironment()
        {
            for (int i = 0; i < environmentObjectsToFade.Length; i++)
            {
                int n = i;
                tweener.Scale(environmentObjectsToFade[i], Vector3.one * 0.001f, 0.3f, () => 
                { 
                    environmentObjectsToFade[n].gameObject.SetActive(false); 
                });
            }
        }

        private void FadeInEnvironment()
        {
            for (int i = 0; i < environmentObjectsToFade.Length; i++)
            {
                int n = i;
                environmentObjectsToFade[i].gameObject.SetActive(true);
                tweener.Scale(environmentObjectsToFade[i], objectsToFadeInitialScales[n], 0.3f);
            }
        }
    }
}
