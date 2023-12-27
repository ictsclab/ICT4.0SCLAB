using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Close2 : MonoBehaviour
{
    public GameObject cube;
    public GameObject button;

    void Start()
    {
        cube.SetActive(false);
    }


    
    public void See()
    {

        if (cube.activeSelf == true)
        {
            cube.SetActive(false);
            button.SetActive(true);
        }

    }
}
