using LightBuzz.Kinect4Azure;
using Microsoft.Azure.CognitiveServices.Vision.ComputerVision.Models;
using UnityEngine;
using UnityEngine.UI;

public class DetectedObjectPanel : MonoBehaviour
{
    [SerializeField] private Image _border;
    [SerializeField] private Text _title;
    [SerializeField] private Text _distance;

    public void Load(DetectedObject obj, UniformImage image = null, CoordinateMapper mapper = null)
    {
        float z = 0.0f;
        string title = obj.ObjectProperty;

        Vector2 topLeft = new Vector2(obj.Rectangle.X, obj.Rectangle.Y);
        Vector2 topRight = new Vector2(obj.Rectangle.X + obj.Rectangle.W, obj.Rectangle.Y);
        Vector2 bottomLeft = new Vector2(obj.Rectangle.X, obj.Rectangle.Y + obj.Rectangle.H);
        Vector2 bottomRight = new Vector2(obj.Rectangle.X + obj.Rectangle.W, obj.Rectangle.Y + obj.Rectangle.H);

        Vector2 position = (topLeft + topRight + bottomLeft + bottomRight) / 4.0f;

        if (mapper != null)
        {
            z = mapper.MapColorToWorld(position).Z;
        }

        if (image != null)
        {
            topLeft = image.GetPosition(topLeft);
            topRight = image.GetPosition(topRight);
            bottomLeft = image.GetPosition(bottomLeft);
            bottomRight = image.GetPosition(bottomRight);

            position = image.GetPosition(position);
        }

        Vector2 size = new Vector2(Mathf.Abs(topRight.x - topLeft.x), Mathf.Abs(bottomLeft.y - topLeft.y));


        _title.text = title;
        _distance.text = z.ToString("N2") + " m";
        _border.rectTransform.localPosition = position;
        _border.rectTransform.sizeDelta = size;
    }
}
