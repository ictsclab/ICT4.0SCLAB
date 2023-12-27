using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class button : MonoBehaviour
{
    List<string> animArray;
    Animation anim;
    public GameObject Guide;
    void Start()
    {
        Guide.SetActive(false);
        anim = gameObject.GetComponent<Animation>();
        animArray = new List<string>();
        
    }
   
    public void OnMouseUpAsButton()
    {
        
        if(Guide.activeSelf == false)
        {
            Guide.SetActive(true);
        }
        else
        {
            Guide.SetActive(false);
        }
    }
    


}
