using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class RetryButton : MonoBehaviour 
{
    public Text distance;

    MusicManager mm;


    void Start()
    {
        mm = GameObject.Find("MusicManager").GetComponent<MusicManager>();
        mm.PlaySound(mm.music[0]);    

        distance.text = "you made it " + GameManager.distance.ToString() + " km into\nthe azrellian asteroid field!";
    }

    public void Retry()
    {
        SceneManager.LoadScene(0);
    }
}
