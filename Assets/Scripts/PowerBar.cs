using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class PowerBar : MonoBehaviour 
{
    public Slider powerBar;
    public Text powerNumberText;
    public int powerBarValue;

    float coolDown;
    float coolDownReset;
	
    void Start()
    {
        coolDown = 1.2f;
        coolDownReset = 1.2f;
    }


	void Update () 
	{
        if(powerBar.value == 0)
        {
            //GameManager.gameOver = true;
        }

        if(!GameManager.warp && !GameManager.gameOver)
        {
            coolDown -= Time.deltaTime;
            if(coolDown <= 0)
            {
                powerBar.value -= GameManager.powerDecay;
                powerBarValue = (int)powerBar.value;
                powerNumberText.text = powerBarValue.ToString() + "%";
                coolDown = coolDownReset;
            }    
        }
	}

    public void AddPower(int amount)
    {
        powerBar.value += amount;
        powerBarValue = (int)powerBar.value;
        coolDown = coolDownReset;
        powerNumberText.text = powerBarValue.ToString() + "%";
    }

    public void ChangePowerDecay(int amount)
    {
        GameManager.powerDecay = amount;
        coolDown = coolDownReset;
    }
}
