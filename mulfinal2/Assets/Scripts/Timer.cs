using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Timer : MonoBehaviour
{
    public GameObject timer;
    public TextMeshPro time;
    public GameObject Timest;
    
    float tim;
    // Start is called before the first frame update
    void Start()
    {
        timer.SetActive(false);
        Timest.SetActive(false);
    }

     public void Timstart()
    {
        
        
        timer.SetActive(true);
        Timest.SetActive(true);
        tim = 0;
    }
    // Update is called once per frame
    void Update()
    {
        tim += Time.deltaTime;
        time.text = "Timer : "+(int) tim + " sec";
    }
    public void timeac()
    {
        timer.SetActive(false);
        Timest.SetActive(false);
    }
}
