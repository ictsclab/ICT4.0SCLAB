using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class up : MonoBehaviour
{
    Animation anim;
 public GameObject Guide;


    public void OnMouseUpAsButton()
    {
        Guide.GetComponent<Animator>().Play("Left_Up");

    }
}
