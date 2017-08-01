using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class TitlescreenButtons : MonoBehaviour 
{

    MusicManager mm;
    SoundManager sm;
    float cooldown = .5f;
    bool playSound = false;

	void Start () 
	{
        mm = GameObject.Find("MusicManager").GetComponent<MusicManager>();
        sm = GameObject.Find("SoundManager").GetComponent<SoundManager>();
        mm.PlaySound(mm.music[0]);

	}

    void Update()
    {
        if(!playSound)
        {
            cooldown -= Time.deltaTime;
            if(cooldown <= 0)
            {
                playSound = true;
                sm.PlaySound(sm.sounds[0]);
            }
        }
    }

	
    public void Instructions()
    {
        SceneManager.LoadScene(1);
    }

    public void EnterField()
    {
        SceneManager.LoadScene(2);
    }

    public void Credits()
    {
        SceneManager.LoadScene(3);
    }

    public void ExitGame()
    {
        Application.Quit();
    }
}
