using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class MoveObstacles : MonoBehaviour 
{
    PowerBar powerBar;
    SoundManager sm;
    GameManager gm;
    float move;


    void Start()
    {
        powerBar = GameObject.Find("Power").GetComponent<PowerBar>();
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();

        sm = GameObject.Find("SoundManager").GetComponent<SoundManager>();
    }
	
	void Update () 
	{
        if(this.gameObject.activeSelf)
        {
            if(this.gameObject.layer == 8)
                move = GameManager.powerSpeed*Time.deltaTime;
            else
                move = GameManager.speed*Time.deltaTime;
            transform.Translate(new Vector3(0,-move,0));

            if(transform.position.y < -6f)
            {
                ObjectPool.DeactivateObject(this.gameObject);
            }
        }
	}

    void OnCollisionEnter2D(Collision2D col)
    {
        if(col.gameObject.CompareTag("Player") && this.CompareTag("Obstacle"))
        {
            //need to play a sound and show the explosion effect on both the asteroid and player
            ObjectPool.DeactivateObject(this.gameObject);
            ObjectPool.DeactivateObject(col.gameObject);
            sm.PlaySound(sm.sounds[0]);
            Instantiate(gm.aExplosion,this.transform.position,this.transform.rotation);
            Instantiate(gm.pExplosion,col.transform.position,col.transform.rotation);
            GameManager.gameOver = true;
        }

        if(col.gameObject.CompareTag("Player") && this.CompareTag("Power"))
        {
            //need to play sound
            ObjectPool.DeactivateObject(this.gameObject);
            sm.PlaySound(sm.sounds[1]);
            powerBar.AddPower(5);
        }

        if(col.gameObject.CompareTag("Player") && this.CompareTag("BigPower"))
        {
            //need to play sound
            ObjectPool.DeactivateObject(this.gameObject);
            sm.PlaySound(sm.sounds[2]);
            powerBar.AddPower(15);
        }

        if(col.gameObject.CompareTag("Player") && this.CompareTag("TimePocket"))
        {
            //need to play sound
            ObjectPool.DeactivateObject(this.gameObject);
            sm.PlaySound(sm.sounds[3]);
            GameManager.speed = 2.5f;
            GameManager.powerSpeed = 3f;
            GameManager.objectSpawn = .5f;
            GameManager.enteredTimePocket = true;

        }

        if(col.gameObject.CompareTag("Player") && this.CompareTag("WormHole"))
        {
            //need to play sound
            ObjectPool.DeactivateObject(this.gameObject);
            sm.PlaySound(sm.sounds[4]);
            GameManager.LightspeedEffect();
        }

        if(col.gameObject.CompareTag("Player") && this.CompareTag("Wrench"))
        {
            //need to play sound
            ObjectPool.DeactivateObject(this.gameObject);
            sm.PlaySound(sm.sounds[5]);
            GameManager.powerDecay = 3;
        }
    }
}
