using Photon.Pun;
using UnityEngine;

namespace Chiligames.MixedRealityTemplate
{
    public class VersatoolManager : MonoBehaviourPunCallbacks
    {
        [SerializeField] private GameObject handBrushPrefab;
        [SerializeField] private PassthroughAble[] passthroughAbles;
        private CustomPasshtroughBrush customPasshtroughBrush;

        public override void OnJoinedRoom()
        {
            var index = FindObjectOfType<RightIndex>().transform;
            var brush = PhotonNetwork.Instantiate(handBrushPrefab.name, index.position, Quaternion.identity);
            customPasshtroughBrush = brush.GetComponent<CustomPasshtroughBrush>();
            brush.transform.SetParent(index);
            brush.transform.localPosition = Vector3.zero;
        }

        private void OnValidate()
        {
            passthroughAbles = FindObjectsOfType<PassthroughAble>();
        }

        //Resets the objects we turned into passthrough with our finger.
        public void ResetPassthroughAbles()
        {
            foreach (var item in passthroughAbles)
            {
                var pass = item.GetComponent<Passthroughfy>();
                if (pass)
                {
                    if (pass.isPassthrough)
                    {
                        pass.SwapMaterials();
                    }
                }
            }
        }

        public void EnableBrush(bool b)
        {
            if(customPasshtroughBrush != null)
            {
                customPasshtroughBrush.EnableBrush(b);
            }
        }

        /// <summary>
        /// Sends an RPC to clean the air passthrough brushes for everyone.
        /// </summary>
        public void CleanBrushesForEveryone()
        {
            photonView.RPC(nameof(RPC_CleanBrushesForEveryone), RpcTarget.AllBuffered);
        }

        [PunRPC]
        private void RPC_CleanBrushesForEveryone()
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                Destroy(transform.GetChild(i).gameObject);
            }
        }
    }

}
