using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class down : MonoBehaviour
{
    public Animator animator;
     
  private bool isNowUp = false;
    public void OnMouseUpAsButton()
    {
        if (Input.GetMouseButtonDown(0))
        {
            AnimBool(true);
        } 
    }
      public void AnimBool(bool tmp)
    {
        Debug.Log(tmp);
        isNowUp = !isNowUp;
        var _nextActivationTrigger = isNowUp ? "tUp" : "tDown";
        animator.SetTrigger(_nextActivationTrigger);
    }
}
