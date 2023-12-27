using Photon.Pun;
using UnityEngine;

namespace Chiligames.MixedRealityTemplate
{
    public class Interactor : MonoBehaviourPun
    {
        public bool magicFinger;
        [SerializeField] private ParticleSystem fingerParticle;
        [SerializeField] private ParticleSystem effectParticle;
        [SerializeField] private AudioClip magicSound;
        [SerializeField] private AudioSource audioSource;

        public void EnableMagicFinger(bool b)
        {
            magicFinger = b;
            if (magicFinger)
            {
                fingerParticle.Play();
            }
            else
            {
                fingerParticle.Stop();
            }
        }

        private void OnTriggerEnter(Collider other)
        {
            if (magicFinger)
            {
                var passthroughable = other.GetComponentInParent<PassthroughAble>();
                if (passthroughable)
                {
                    ApplyPassthroughMagic(passthroughable.gameObject);
                }
            }
        }

        [PunRPC]
        private void ApplyPassthroughMagic(GameObject obj)
        {
            audioSource.PlayOneShot(magicSound);
            effectParticle.Play();
            var pass = obj.GetComponent<Passthroughfy>();
            if (pass)
            {
                pass.SwapMaterials();
            }
            else
            {
                obj.AddComponent<Passthroughfy>();
            }
        }
    }
}
