using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class PlayerController : MonoBehaviour 
{
    public Text distanceText;

    float horizontal;
    float speed = 5f;
    float coolDown;
    float coolDownReset;

    Animator anim;
	
    void Start()
    {
        coolDown = .3f;
        coolDownReset = .3f;
        anim = GetComponent<Animator>();
    }

	void Update () 
	{
        horizontal = Input.GetAxis("Horizontal");
        if(horizontal !=0)
        {
            if(horizontal < 0)
            {
                anim.SetBool("ThrustLeft", false);
                anim.SetBool("ThrustRight", true);
            }

            if(horizontal > 0)
            {
                anim.SetBool("ThrustLeft", true);
                anim.SetBool("ThrustRight", false);
            }

            transform.Translate(new Vector3(horizontal * speed * Time.deltaTime, 0,0));


        }
        else if(horizontal == 0)
        {
            anim.SetBool("ThrustLeft", false);
            anim.SetBool("ThrustRight", false);
        }

       
        if(!GameManager.gameOver && !GameManager.warp)
        {
            coolDown -= Time.deltaTime;
            if(coolDown <= 0)
            {
                GameManager.distance += 1;
                distanceText.text = GameManager.distance.ToString() + " km";
                coolDown = coolDownReset;
            }
        }

        if(GameManager.warp)
        {
            GameManager.distance += 1;
            distanceText.text = GameManager.distance.ToString() + " km";
        }
	}
}
