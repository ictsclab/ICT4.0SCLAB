using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class JointSimilarityMaster : MonoBehaviour
{
   int getCount = 0;
    [System.Serializable]
    public struct EditorSettings
    {
        [Header("- UI Settings")]
        public float weight;
        public TextMeshPro completeViewer;
        //public Text Count;
        public Animator animator;
        public bool isNowUp;
       

    }


    [SerializeField] EditorSettings editor;

    [System.Serializable]
    public struct studentDescriptor
    {
        public GameObject studentRoot;
        public Vector3 studentColliderCenter;
        public Vector3 studentColliderSize;

        public GameObject TeacherRoot;
        public Vector3 TeacherColliderCenter;
        public Vector3 TeacherColliderSize;

        public List<GameObject> studentJointTransforms;
    }
    [SerializeField] studentDescriptor descriptor;

    [Header("- Debug Only")]
    [SerializeField] protected List<JointSimilarityAgent> agents;

  
    private void Awake()
    {
        MasterSettings();
        ModelColliderSettings();
    }

    private void MasterSettings()
    {
        if (editor.weight == 0) editor.weight = 1.0f;
    }

    private void ModelColliderSettings()
    {
        //예외 처리
        if (!descriptor.studentRoot || !descriptor.TeacherRoot) return;

        var createdAgents = new Dictionary<string, JointSimilarityAgent>();
        descriptor.studentJointTransforms.ForEach(_go =>
        {
            JointSimilarityAgent _agent = _go.AddComponent<JointSimilarityAgent>();
            _agent.weight = editor.weight;
            GameObject _agentGameObject = _agent.gameObject;
            
            bool _hasStudentRigidBody = _agentGameObject.TryGetComponent<Rigidbody>(out var _studentRigidBody);
            if (!_hasStudentRigidBody)
            {
                _studentRigidBody = _agentGameObject.AddComponent<Rigidbody>();
                _studentRigidBody.useGravity = false;
               
                _studentRigidBody.constraints = RigidbodyConstraints.FreezeAll;
            }
            bool _hasStudentCollider = _agentGameObject.TryGetComponent<BoxCollider>(out var _studentBoxCollider);
            if (!_hasStudentCollider)
            {
                _studentBoxCollider = _agentGameObject.AddComponent<BoxCollider>();
                _studentBoxCollider.isTrigger = true;
                _studentBoxCollider.size = descriptor.studentColliderSize;
               
            }
            
            _agent.studentCollider = _studentBoxCollider;
            
            agents.Add(_agent);
            createdAgents.Add(_agentGameObject.name, _agent);
        });

        foreach (var key in createdAgents.Keys)
        {
            var _gameObjectInTeacher = Search(descriptor.TeacherRoot.transform, key).gameObject;

            bool _hasStudentComponent = _gameObjectInTeacher.TryGetComponent<BoxCollider>(out var _TeacherComp);
            if (!_hasStudentComponent)
            {
                _TeacherComp = _gameObjectInTeacher.AddComponent<BoxCollider>();
                _TeacherComp.size = descriptor.TeacherColliderSize;

                
            }

            createdAgents[key].teacherCollider = _TeacherComp;
        }
    }

    
    private void Update()
    {
        var _prevText = editor.completeViewer.text + "";
        var _nowText = SimilarityCalculation() >0.9994f ? "Complete" : "";
        //Debug.Log(SimilarityCalculation());
        editor.completeViewer.text = _nowText;
        if("Complete".Equals(_nowText) && !_prevText.Equals(_nowText))
        {
            editor.isNowUp = !editor.isNowUp;
            var _nextActivationTrigger = editor.isNowUp ? "tUp" : "tDown";
            editor.animator.SetTrigger(_nextActivationTrigger);
           
        }
      
    }
    
   
    private float SimilarityCalculation()
    {
        var _availableAgentValues = from _agent in agents where _agent.isAvailable select _agent.Similarity;
        float _sumSimilarity = _availableAgentValues.Sum();
        return _sumSimilarity / agents.Count;
    }

    #region Utils
    public static Transform Search(Transform target, string name)
    {
        if (target.name == name) return target;

        for (int i = 0; i < target.childCount; ++i)
        {
            var result = Search(target.GetChild(i), name);
            if (result != null) return result;
        }
        return null;
    }
    #endregion
}
