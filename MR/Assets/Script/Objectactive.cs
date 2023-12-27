using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objectactive : MonoBehaviour
{
    public GameObject keyboard;
    public GameObject Ipcontroll;
    // Start is called before the first frame update
    void Start()
    {
        keyboard.SetActive(false);
        Ipcontroll.SetActive(false);
    }

    public void activecontroll()
    {
        if(keyboard.activeSelf == false)
        {
            keyboard.SetActive(true);
            Ipcontroll.SetActive(true);
        }else
        {
            keyboard.SetActive(false);
            Ipcontroll.SetActive(false);
        }
    }
}
