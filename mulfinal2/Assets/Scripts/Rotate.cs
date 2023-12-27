using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    public GameObject gb;
    public GameObject gb2;
   
    public float rotSpeed = 100f;
    void Start()
    {
        
    }

    void Update()
    {
        gb.transform.Rotate(new Vector3(0, 0, rotSpeed * Time.deltaTime));
        gb2.transform.Rotate(new Vector3(0, 0, rotSpeed * Time.deltaTime));
       
    }
}
