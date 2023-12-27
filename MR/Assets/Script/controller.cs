using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controller : MonoBehaviour
{
    public GameObject df;
    public GameObject ku;
    public GameObject kj;
    void Start()
    {
        df.SetActive(false);
        ku.SetActive(false);
        kj.SetActive(false);
    }

    public void dfac()
    {
        if(df.activeSelf == false)
        {
            df.SetActive(true);
            ku.SetActive(false);
            kj.SetActive(false);
        }
    }
    public void kuac()
    {
        if(ku.activeSelf == false)
        {
            df.SetActive(false);
            ku.SetActive(true);
            kj.SetActive(false);
        }
    }
    public void kjac()
    {
        if(kj.activeSelf == false)
        {
            df.SetActive(false);
            ku.SetActive(false);
            kj.SetActive(true);
        }
    }
}
