using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class active : MonoBehaviour
{
    public GameObject gb;
    public GameObject gb2;

    private void Start()
    {
        gb.SetActive(false);
        gb2.SetActive(false);
    }

    public void setgb()
    {
        if(gb.activeSelf == false)
        {
            gb.SetActive(true);
            gb2.SetActive(true);
        }if(gb.activeSelf == true) { 
            gb.SetActive(false);
        gb2.SetActive(false);
            }

        
    }
}
