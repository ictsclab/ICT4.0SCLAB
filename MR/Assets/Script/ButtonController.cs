using UnityEngine;
using Photon.Pun;
using System.Collections;

public class buttonc : MonoBehaviourPun
{
    public GameObject[] modelsToInstantiate;
    private GameObject[] instantiatedModels = new GameObject[4];
    private bool isCoroutineRunning = false; // 코루틴 실행 상태를 확인하는 변수 추가
    // These functions could be hooked up to your buttons
    public void OnButton1Click()
    {
        InstantiateModel(0);
    }

    public void OnButton2Click()
    {
        InstantiateModel(1);
    }

    public void OnButton3Click()
    {
        InstantiateModel(2);
    }

    public void OnButton4Click()
    {
        InstantiateModel(3);
    }

    
 private void InstantiateModel(int modelIndex)
    {
        if (PhotonNetwork.IsMasterClient) // Only the MasterClient should handle the instantiation
        {
            StartCoroutine(DelayedInstantiateModel(modelIndex));
        }
    }


  private IEnumerator DelayedInstantiateModel(int modelIndex)
{
    // 이미 해당 모델이 생성되어 있다면 코루틴 종료
    if (instantiatedModels[modelIndex] != null)
    {
        yield break; // 코루틴 종료
    }

        // Loop through all the models
        for (int i = 0; i < 4; i++)
        {
            if (i != modelIndex && instantiatedModels[i] != null)
            {
                // If it's not the selected model and it has been instantiated, destroy it
                PhotonNetwork.Destroy(instantiatedModels[i]);
                instantiatedModels[i] = null;
            }
        }

        // Wait for a short delay to ensure the models are destroyed
        yield return new WaitForSeconds(0.1f);

        Vector3 position = new Vector3(0, 0, 0); // Default position for models 1, 2, and 3

        if (modelIndex == 3) // If it's the 4th model
        {
            position = new Vector3(-0.4f, 12.155f, 0.1f); // Set the desired position for the 4th model
        }
        // Instantiate the selected model if it hasn't been instantiated yet
        instantiatedModels[modelIndex] = PhotonNetwork.Instantiate(modelsToInstantiate[modelIndex].name, position, Quaternion.identity);
        instantiatedModels[modelIndex].SetActive(true);
        
    }
}