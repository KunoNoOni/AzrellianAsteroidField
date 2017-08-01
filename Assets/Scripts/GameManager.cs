using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class GameManager : MonoBehaviour 
{
    public static bool gameOver = false;
    public static float speed = 2.5f;
    public static float powerSpeed = 3f;
    public static float objectSpawn = .5f;
    public static bool warp = false;
    public static int distance = 0;
    public static int powerDecay = 3;
    public static bool enteredTimePocket = false;
    public GameObject pExplosion;
    public GameObject aExplosion;

    PowerBar powerBar;
    ObjectSpawner os;
    MusicManager mm;

    float maxSpeed;
    float coolDown;
    float coolDownReset;
    float warpCoolDown;
    float warpCoolDownReset;
    int objectSpawnCounter;
    int powerDecayCounter;
    int powerSpeedCounter;
    bool mute = false;

    void Start()
    {
        coolDown = 7f;
        coolDownReset = 7f;
        maxSpeed = 7.3f;
        objectSpawnCounter = 0;
        powerDecayCounter = 0;
        powerSpeedCounter = 0;
        warpCoolDown = 5f;
        warpCoolDownReset = 5f;
        powerBar = GameObject.Find("Power").GetComponent<PowerBar>();
        os = GameObject.Find("ObjectSpawner").GetComponent<ObjectSpawner>();
        mm = GameObject.Find("MusicManager").GetComponent<MusicManager>();
        mm.PlaySound(mm.music[0]);
        //Debug.Log("SPEED is set to "+speed);
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }

        if(Input.GetKeyDown(KeyCode.M))
        {
            mute = !mute;
            mm.MuteMusic(mute);
        }

        if(warp)
        {
            warpCoolDown -= Time.deltaTime;
            if(warpCoolDown <= 0)
            {
                warp = false;
                ParticleSystem ps = GameObject.Find("Particle System").GetComponent<ParticleSystem>();
                var main = ps.main;
                main.gravityModifier = 0f;
                warpCoolDown =  warpCoolDownReset;
                Debug.Log("Starting Coroutine again!");
                os.StartCoroutine(os.SpawnObstacles());
            }
        }

        if(enteredTimePocket)
        {
            enteredTimePocket = false;
            objectSpawnCounter = 0;
            powerDecayCounter = 0;
            powerSpeedCounter = 0;
            coolDown = coolDownReset;
        }


        if(speed < maxSpeed && !warp)
        {
            
            coolDown -= Time.deltaTime;
            if(coolDown <= 0)
            {
                powerDecayCounter++;
                objectSpawnCounter++;
                powerSpeedCounter++;
                
                speed += .3f;           

                //Debug.Log("Increasing the SPEED to "+speed);

                if(powerSpeedCounter == 4)
                {
                    powerSpeedCounter = 0;
                    powerSpeed += .2f;
                }

                if(powerDecayCounter == 8)
                {
                    powerDecayCounter = 0;
                    powerDecay += 1;
                    powerBar.ChangePowerDecay(powerDecay);   
                }

                if(objectSpawnCounter == 4)
                {
                    objectSpawnCounter = 0;
                    objectSpawn -= .1f;
                }
                coolDown = coolDownReset;

            }    
        }

        if(gameOver)
        {
            gameOver = false;
            StartCoroutine(SwitchToGameOver());
        }
    }

    IEnumerator SwitchToGameOver()
    {
        yield return new WaitForSeconds(2f);
        SceneManager.LoadScene(5);
    }


    public static void LightspeedEffect()
    {
        ParticleSystem ps = GameObject.Find("Particle System").GetComponent<ParticleSystem>();
        var main = ps.main;
        float lightSpeedEffect = 25f;

        warp = true;   
        main.gravityModifier = lightSpeedEffect;
    }

	
}
