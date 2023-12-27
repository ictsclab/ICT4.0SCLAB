using UnityEngine;
using System.Collections;

public class Active : MonoBehaviour
{
    public GameObject cube;

    void Start()
    {
        cube.SetActive(false);
    }

    public void OnMouseUpAsButton()
    {
        if (cube.activeSelf == false)
        {
            cube.SetActive(true);

        }
        else {
             cube.SetActive(false);

        }
        
    }
}

 




