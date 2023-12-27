using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ActivateKeyboard : MonoBehaviour, ISelectHandler, IDeselectHandler
{
    public GameObject firstVirtualKeyboard;
    public GameObject secondVirtualKeyboard;

    private InputField inputField;

    void Start()
    {
        // Initially set the virtual keyboards to inactive
        firstVirtualKeyboard.SetActive(false);
        secondVirtualKeyboard.SetActive(false);

        // Get the InputField component on the current game object
        inputField = GetComponent<InputField>();
    }

    public void OnSelect(BaseEventData eventData)
    {
        // Activate the appropriate virtual keyboard based on the selected InputField
        if (inputField.name == "FirstInputField")
        {
            firstVirtualKeyboard.SetActive(true);
        }
        else if (inputField.name == "SecondInputField")
        {
            secondVirtualKeyboard.SetActive(true);
        }
    }

    public void OnDeselect(BaseEventData eventData)
    {
        // Deactivate the appropriate virtual keyboard based on the deselected InputField
        if (inputField.name == "FirstInputField")
        {
            firstVirtualKeyboard.SetActive(false);
        }
        else if (inputField.name == "SecondInputField")
        {
            secondVirtualKeyboard.SetActive(false);
        }
    }
}
