using UnityEngine;

public class ObjectScaler : MonoBehaviour
{
    public float scaleSpeed = 0.1f; // 스케일 변화 속도
    private OVRInput.Controller controller; // Oculus Rift 컨트롤러

    private void Start()
    {
        controller = OVRInput.Controller.RTouch; // 오른쪽 터치 컨트롤러를 사용
    }

    private void Update()
    {
        // A 버튼을 누르면 객체 크기 감소
        if (OVRInput.GetDown(OVRInput.Button.One, controller))
        {
            ScaleObject(-scaleSpeed);
        }

        // B 버튼을 누르면 객체 크기 증가
        if (OVRInput.GetDown(OVRInput.Button.Two, controller))
        {
            ScaleObject(scaleSpeed);
        }
    }

    private void ScaleObject(float deltaScale)
    {
        // 현재 스케일에 변화량을 더해 새로운 스케일을 설정
        Vector3 newScale = transform.localScale + new Vector3(deltaScale, deltaScale, deltaScale);
        transform.localScale = newScale;
    }
}
