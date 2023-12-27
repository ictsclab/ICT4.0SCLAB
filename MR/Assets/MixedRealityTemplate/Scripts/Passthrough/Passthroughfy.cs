using System;
using System.Collections;
using UnityEngine;

namespace Chiligames.MixedRealityTemplate
{
    public class Passthroughfy : MonoBehaviour
    {
        private Renderer[] renderers;
        private Material[] originalMaterials;
        public bool isPassthrough;
        private float cooldown = 0.5f;
        private bool onCooldown;

        private void Start()
        {
            SetupRenderers();
            SwapMaterials();
        }

        private void SetupRenderers()
        {
            renderers = GetComponentsInChildren<MeshRenderer>();
            if(renderers.Length > 0)
            {
                originalMaterials = new Material[renderers.Length];

                for (int i = 0; i < renderers.Length; i++)
                {
                    originalMaterials[i] = renderers[i].material;
                }
            }
        }

        public void SwapMaterials()
        {
            if (onCooldown) return;
            if (renderers == null) return;
            if(renderers.Length > 0)
            {
                if (isPassthrough)
                {
                    isPassthrough = false;
                    for (int i = 0; i < renderers.Length; i++)
                    {
                        renderers[i].material = originalMaterials[i];
                    }
                }
                else
                {
                    isPassthrough = true;
                    for (int i = 0; i < renderers.Length; i++)
                    {
                        renderers[i].material = PassthroughManager.instance.passthroughMaterial;
                    }
                }
                StartCoroutine(Cooldown());
            }
        }

        IEnumerator Cooldown()
        {
            onCooldown = true;
            yield return new WaitForSeconds(cooldown);
            onCooldown = false;
        }
    }
}
