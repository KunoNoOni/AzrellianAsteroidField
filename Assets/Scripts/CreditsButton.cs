using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class CreditsButton : MonoBehaviour 
{
    MusicManager mm;

    void Start()
    {
        mm = GameObject.Find("MusicManager").GetComponent<MusicManager>();
        mm.PlaySound(mm.music[0]);    
    }

    public void Retry()
    {
        SceneManager.LoadScene(0);
    }
}
