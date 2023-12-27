/**
 *
 * @brief Bone으로 생성된 3D 모델의 Default 설정 값을 메인 코드에서 호출하기 위한 서브 코드
 * @author Woosung Shim
 * @date 2021-11-03
 * @version 1.0.0
 * 
 */
using System.Collections.Generic;
using System.Data;
using UnityEngine;


namespace LightBuzz.Kinect4Azure
{

    public class Demo_Kinect4Azure_Angles : MonoBehaviour
    {
       
        [SerializeField] private Configuration _configuration;
        [SerializeField] private UniformImage _image;
        [SerializeField] private Canvas _canvas;
        [SerializeField] private StickmanManager _stickmanManager;
        [SerializeField] private GameObject _stickmanAnglesPrefab;

        private KinectSensor _sensor;
        private List<StickmanAngles> _angles = new List<StickmanAngles>();

        private void Start()
        {
            _sensor = KinectSensor.Create(_configuration);

            if (_sensor == null)
            {
                UnityEngine.Debug.LogError("Sensor not connected!");
                return;
            }

            _sensor.Open();
        }

        private void Update()
        {
           
            if (_sensor == null || !_sensor.IsOpen) return;

            Frame frame = _sensor.Update();
            

            if (frame != null)
            {
                if (frame.ColorFrameSource != null)
                {
                    _image.Load(frame.ColorFrameSource);
                    
                }

                if (frame.BodyFrameSource != null)
                {
                    _stickmanManager.Load(frame.BodyFrameSource.Bodies);

                    LoadAngles(frame.BodyFrameSource.Bodies);
                    
                }
            }
           

        }

        private void OnDestroy()
        {
            _sensor?.Close();
        }

        private void LoadAngles(List<Body> bodies)
        {
             
            if (bodies == null) return;

            if (_stickmanManager.Count != _angles.Count)
            {
                foreach (StickmanAngles item in _angles)
                {
                    Destroy(item.gameObject);
                }

                _angles.Clear();

                for (int i = 0; i < _stickmanManager.Count; i++)
                {
                    StickmanAngles stickmanAngles = Instantiate(_stickmanAnglesPrefab, _canvas.transform).GetComponent<StickmanAngles>();
                    stickmanAngles.RegisterStickman(_stickmanManager[i]);
                    _angles.Add(stickmanAngles);
                    
                }
                
            }

            for (int i = 0; i < bodies.Count; i++)
            {
                _angles[i].UpdateAngles(bodies[i]);
                
            }
            
        }
    }
}
