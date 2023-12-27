using UnityEngine;
using System.Collections;


public class JointSimilarityAgent : MonoBehaviour
{


    public Collider studentCollider;
    public Collider teacherCollider;

    public bool isAvailable;

    public float weight = 1.0f;
    public float Similarity => weight / (weight + similarity);
    // 민감도가 병신 같을 시 더 유사함이 쉽게 됨
   [SerializeField] private float similarity;
   
    private void OnTriggerStay(Collider other)
    {
       
        if (!gameObject.name.Equals(other.name))
        {
            isAvailable = false;
            return;
        }
        isAvailable = true;
        var _studentPosition = studentCollider.transform.position;
        var _TeacherPosition = teacherCollider.transform.position;

        var _deltaPosition = _studentPosition - _TeacherPosition;
        similarity = _deltaPosition.magnitude;
    }

    private void OnTriggerExit(Collider other)
    {
        isAvailable = false;
    }

}
