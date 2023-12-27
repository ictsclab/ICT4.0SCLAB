using Photon.Pun;
using UnityEngine;

namespace Chiligames.MixedRealityTemplate
{
    public class TurnBasedBoardGame : MonoBehaviourPun
    {
        [SerializeField] private PhotonView[] pieces;
        [SerializeField] private OVRGrabber blockGrabber;
        private Vector3[] initialPositions;
        private Quaternion[] initialRotations;
        private Tweener tweener;

        //Turns
        private bool isBusy;
        private int userPlaying;
        [SerializeField] private TMPro.TextMeshProUGUI busyCanvasText;

        private void Start()
        {
            tweener = FindObjectOfType<Tweener>();
            Invoke(nameof(StoreInitialTransforms), 1);

            foreach (var item in pieces)
            {
                item.GetComponent<PunOVRGrabbable>().OnGrabbed.AddListener(SetPiecesOwnership);
                item.GetComponent<PunOVRGrabbable>().OnReleased.AddListener(PieceReleased);
            }
        }

        private void StoreInitialTransforms()
        {
            initialPositions = new Vector3[pieces.Length];
            initialRotations = new Quaternion[pieces.Length];

            for (int i = 0; i < pieces.Length; i++)
            {
                initialPositions[i] = pieces[i].transform.position;
                initialRotations[i] = pieces[i].transform.rotation;
            }
        }

        public void SetPiecesOwnership()
        {
            foreach (var item in pieces)
            {
                item.TransferOwnership(PhotonNetwork.LocalPlayer);
                item.GetComponent<Rigidbody>().isKinematic = true;
            }
            photonView.RPC(nameof(SetPiecesKinematicForRest), RpcTarget.OthersBuffered);
            photonView.RPC(nameof(SetGameBusy), RpcTarget.AllBuffered, PhotonNetwork.LocalPlayer.ActorNumber);

        }

        private void PieceReleased()
        {
            foreach (var item in pieces)
            {
                item.TransferOwnership(PhotonNetwork.LocalPlayer);
                item.GetComponent<Rigidbody>().isKinematic = false;
            }
            photonView.RPC(nameof(SetGameNotBusy), RpcTarget.AllBuffered);
        }

        [PunRPC]
        private void SetGameBusy(int actorNumber)
        {
            userPlaying = actorNumber;
            busyCanvasText.text = "Wait for your friend's move";
            busyCanvasText.gameObject.SetActive(true);
            foreach (var item in pieces)
            {
                item.GetComponent<PunOVRGrabbable>().SetBusy(true, blockGrabber);
            }
        }

        [PunRPC]
        private void SetGameNotBusy()
        {
            userPlaying = 0;
            busyCanvasText.text = "Wait for your friend's move";
            busyCanvasText.gameObject.SetActive(false);
            foreach (var item in pieces)
            {
                item.GetComponent<PunOVRGrabbable>().SetBusy(false);
            }
        }

        [PunRPC]
        private void SetPiecesKinematicForRest()
        {
            foreach (var item in pieces)
            {
                item.GetComponent<Rigidbody>().isKinematic = true;
            }
        }

        public void ResetPieces()
        {
            if (isBusy) return;
            SetPiecesOwnership();

            for (int i = 0; i < pieces.Length; i++)
            {
                int n = i;
                pieces[n].GetComponent<PunOVRGrabbable>().SetKinematic(true);
                tweener.LocalMove(pieces[n].transform, initialPositions[n], 1);
                tweener.Rotate(pieces[n].transform, initialRotations[n], 1);
            }

            Invoke(nameof(PieceReleased), 1);
        }
    }
}
