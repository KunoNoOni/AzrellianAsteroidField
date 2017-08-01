using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class EnterField : MonoBehaviour 
{
    SoundManager sm;

    void Start()
    {
        sm = GameObject.Find("SoundManager").GetComponent<SoundManager>();
        sm.PlaySound(sm.sounds[0]);
    }

	void Update () 
	{
        if(Input.GetKeyDown(KeyCode.Escape) || !sm.channels[0].isPlaying)
        {
            SceneManager.LoadScene(4);
        }
	}
}
