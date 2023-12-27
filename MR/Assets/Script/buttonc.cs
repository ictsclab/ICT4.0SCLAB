using UnityEngine;
using Photon.Pun;

public class ButtonController : MonoBehaviourPun
{
    public GameObject[] modelsToInstantiate;
    private GameObject[] instantiatedModels = new GameObject[3];

    // These functions could be hooked up to your buttons
    public void OnButton1Click() {
        InstantiateModel(0);
    }

    public void OnButton2Click() {
        InstantiateModel(1);
    }

    public void OnButton3Click() {
        InstantiateModel(2);
    }

    private void InstantiateModel(int modelIndex)
    {
        if (PhotonNetwork.IsMasterClient) // Only the MasterClient should handle the instantiation
        {
            // Loop through all the models
            for (int i = 0; i < 3; i++)
            {
                if (i == modelIndex && instantiatedModels[i] == null)
                {
                    // Instantiate the selected model if it hasn't been instantiated yet
                    instantiatedModels[i] = PhotonNetwork.Instantiate(modelsToInstantiate[i].name, new Vector3(0, 0, 0), Quaternion.identity);
                }
                else if (i != modelIndex && instantiatedModels[i] != null)
                {
                    // If it's not the selected model and it has been instantiated, destroy it
                    PhotonNetwork.Destroy(instantiatedModels[i]);
                    instantiatedModels[i] = null;
                }
            }
        }
    }
}
