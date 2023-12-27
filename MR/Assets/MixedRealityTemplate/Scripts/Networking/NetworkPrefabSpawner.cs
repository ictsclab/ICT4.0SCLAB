using Photon.Pun;
using UnityEngine;

namespace Chiligames.MixedRealityTemplate
{
    public class NetworkPrefabSpawner : MonoBehaviourPun
    {
        [SerializeField] private GameObject prefab;
        [SerializeField] private Tweener tweener;
        [SerializeField] private Transform spawnPosition;

        //Spawns the referenced prefab in the spawnPosition with a random rotation, with a scaling up animation.
        public void SpawnPrefab()
        {
            var obj = PhotonNetwork.Instantiate(prefab.name, Vector3.down, Random.rotation);
            obj.transform.SetParent(transform);
            obj.transform.localScale = Vector3.one * 0.01f;
            obj.transform.position = spawnPosition.position;
            obj.GetComponent<PunOVRGrabbable>().SetKinematic(true);
            tweener.Scale(obj.transform, Vector3.one, 0.2f, () => 
            { 
                obj.GetComponent<PunOVRGrabbable>().SetKinematic(false); 
            });
        }

        //Destroys all the prefabs created with this spawner for everyone
        public void DestroyObjectsForEveryone()
        {
            photonView.RPC(nameof(RPC_DestroyObjectsForEveryone), RpcTarget.AllBuffered);
        }

        [PunRPC]
        private void RPC_DestroyObjectsForEveryone()
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                PhotonNetwork.Destroy(transform.GetChild(i).gameObject);
            }
        }
    }
}
