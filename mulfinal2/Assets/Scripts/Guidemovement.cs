using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class Guidemovement : MonoBehaviour
{
    public GameObject Tim;
    public GameObject Timest;
   float timer;
    int timer2;
    float clickTime = 0;
    public TextMeshPro Timer;
    private void Start()
    {
        Tim.SetActive(false);
        Timest.SetActive(false);
    }
    public void OnMouseUpAsButton()
    {
            Tim.SetActive(true);
            timer = 0;
            Timest.SetActive(true);
    }
   
    private void Update()
    {
        timer += Time.deltaTime;
        timer2 = (int)(60 - timer);
        Timer.text = "Timer : "+timer2 +" "+ "sec";
        if (timer2 == -1)
        {
            Tim.SetActive(false);
            
        }
       
        }
    public void timeac()
    {
        Tim.SetActive(false);
        Timest.SetActive(false); 
    }
    }
    


