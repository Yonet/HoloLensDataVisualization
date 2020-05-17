using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine;
using TMPro;

public class ChangeTitle : MonoBehaviour
{
    TextMeshPro tmp = null;
    // Start is called before the first frame update
    void Start()
    {
        tmp = GetComponentInChildren<TextMeshPro>();
        Debug.Log("Current text " + tmp.text);
    }

    // Update is called once per frame
    public void OnClick(MixedRealityPointerEventData mixedRealityPointerEventData)
    {
        tmp.text = "Changed noq.l.....";
        Debug.Log("On click text " + tmp.text);
    }
}
