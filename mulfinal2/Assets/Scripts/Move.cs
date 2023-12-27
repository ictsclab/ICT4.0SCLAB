using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    private bool isNowUp = false;
    public Animator animator;
    public GameObject _Hololens;

    public void Update()
    {
        if (Input.GetKeyDown(KeyCode.K))
        {
            AnimBool(true);
        }
    }
    public void AnimBool(bool tmp)
    {
        if (Input.GetKeyDown(KeyCode.K))
        {
            isNowUp = !isNowUp;
            Debug.Log(tmp);
            var _nextActivationTrigger = isNowUp ? "tUp" : "tDown";
            animator.SetTrigger(_nextActivationTrigger);
        }

    }
}
