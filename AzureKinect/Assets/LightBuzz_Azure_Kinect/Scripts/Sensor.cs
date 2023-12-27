using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LightBuzz.Kinect4Azure;

public class Sensor : MonoBehaviour
{

    KinectSensor sensor;
    [SerializeField] MeshRenderer screen;
    //[SerializeField] LightBuzz.Kinect4Azure.Avateering.Avatar avatar;
    // Start is called before the first frame update
    void Start()
    {

        //sensor = KinectSensor.Create(new Configuration()
        //{
        //    DeviceIndex = 0,
        //    ColorResolution = ColorResolution.ColorResolution_1080P,
        //    ColorFormat = ColorFormat.MJPG,
        //    DepthMode = DepthMode.NFOV_Unbinned,
        //    FPS = FramesPerSecond.FPS_30

        //});
        //sensor?.Open();
        //if (sensor.IsOpen)
        //{
        //    Debug.Log("센서가 열렸습니다");
        //}
        //else
        //{
        //    Debug.Log("센서가 없습니다");
        //}
    }
    // Update is called once per frame
    void Update()
    {
        Frame frame = sensor.Update();
        if (frame != null)
        {
            if (frame.ColorFrameSource != null)
            {
                byte[] colordata = frame.ColorFrameSource.Data;
                int colorWidth = frame.ColorFrameSource.Width;
                int colorHeight = frame.ColorFrameSource.Height;

                var _tex = new Texture2D(colorWidth, colorHeight, TextureFormat.RGB24, false);

                _tex.LoadRawTextureData(colordata);
                _tex.Apply();
                screen.materials[0].mainTexture = _tex;
               

            }
        }
        //    if (frame != null)
        //    {
        //        if(frame.DepthFrameSource != null)
        //        {
        //            ushort[] depthdata = frame.DepthFrameSource.Data;
        //            int depthWidth = frame.DepthFrameSource.Width;
        //            int depthHeight = frame.DepthFrameSource.Height;
        //        }
        //        if (frame.BodyFrameSource != null)
        //        {
        //            Body body = frame.BodyFrameSource.Bodies.Closest();

        //            if (body != null)
        //            {
        //                avatar.Update(body);
        //            }

        //        }
        //    }       
        //}
        //private void OnDestroy()
        //{
        //    sensor?.Close();
        //}


    }
}

    

