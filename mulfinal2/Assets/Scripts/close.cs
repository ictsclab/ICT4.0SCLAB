using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class close : MonoBehaviour
{
    public GameObject cube;
    public GameObject button;

    
    public void See()
    {

        if (cube.activeSelf == true)
        {
            cube.SetActive(false);
            button.SetActive(true);
        }

    }

}
