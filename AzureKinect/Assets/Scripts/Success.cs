using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Success : MonoBehaviour
{
    public GameObject Text;
    public Text t;
    private bool state;
    [SerializeField] private GameObject p;
    [SerializeField] private GameObject d;
    void Start()
    {       
        //Text.GetComponent<Text>().text = "Success";
        t = Text.GetComponent<Text>();        
        state = false;

    }
    
    void OnTriggerStay(Collider call)
    {
        if (call.transform.root.gameObject == p)
        {
            Text.SetActive(true);
            state = true;
        }
        else
            
            state = false;
    }
    void Update()
    {
        if (state == false)
        {
            Text.SetActive(false); 
        }
    }
    //private void GetMouseButton()
    //{
    //   if (Input.GetMouseButtonDown(0))
    //    {
    //        Debug.Log("È°¼ºÈ­µÊ");
    //        if (state == true)
    //        {
    //            Text.SetActive(false); 
    //            state = false;
    //        }
                       
    //    }
    //   else
    //    {
    //        Text.SetActive(false);
    //        state = false;
    //    }
    }

    
