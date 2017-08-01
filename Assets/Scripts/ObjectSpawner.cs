using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class ObjectSpawner : MonoBehaviour 
{
    public GameObject bigAsteroids;
    public GameObject smallAsteroids;
    public GameObject power;
    public GameObject bigPower;
    public GameObject timePocket;
    public GameObject wormHole;
    public GameObject wrench;

    GameObject obstacle;

    int randomX = 0;
    int lastX = 0;
    int y = 6;

	void Start () 
	{
        ObjectPool.CreatePool(bigAsteroids,100,0,0,this.transform,15);
        ObjectPool.CreatePool(smallAsteroids,110,0,0,this.transform,15);
        ObjectPool.CreatePool(power,120,0,0,this.transform,15);
        ObjectPool.CreatePool(bigPower,130,0,0,this.transform,15);
        ObjectPool.CreatePool(timePocket,140,0,0,this.transform,15);
        ObjectPool.CreatePool(wormHole,150,0,0,this.transform,15);
        ObjectPool.CreatePool(wrench,160,0,0,this.transform,15);


        StartCoroutine(SpawnObstacles());
	}

    void Update()
    {
        if(GameManager.warp)
        {
            DisableAllObstacles();
        }
    }

    public IEnumerator SpawnObstacles()
    {
        while (!GameManager.warp)
        {
            //Debug.Log("Warp is FALSE!");
            yield return new WaitForSeconds(GameManager.objectSpawn);
            lastX = randomX;
            randomX = Random.Range(-6,7);
            while (randomX == lastX)
            {
                lastX = randomX;
                randomX = Random.Range(-6,7);
            }   
                
            obstacle = GetRandomObstacle();
            obstacle.transform.position = new Vector3(randomX,y,0);
            ObjectPool.ActivateObject(obstacle);
        }
    }

    GameObject GetRandomObstacle()
    {
        int rnd;
        int rndChance;
        int maxObjects;
        GameObject go;

        maxObjects = this.transform.childCount;
        rnd = Random.Range(0, 29);
        rndChance = Random.Range(0,100);
        go = this.gameObject.transform.GetChild(rnd).gameObject;

        //There is a 25% chance a PowerUp will be chosen
        if(rndChance <= 25)
        {
            //There is a 3% chance the power will be a Big Power
            if(rndChance <= 2)
            {
                rnd = Random.Range(45, 59);
                go = this.gameObject.transform.GetChild(rnd).gameObject; 
                while(go.activeInHierarchy)
                {
                    rnd = Random.Range(45, 59);
                    go = this.gameObject.transform.GetChild(rnd).gameObject;   
                }
            }
            //There is a 1% chance the power will be a Time Pocket
            else if(rndChance == 10)
            {
                rnd = Random.Range(60, 74);
                go = this.gameObject.transform.GetChild(rnd).gameObject; 
                while(go.activeInHierarchy)
                {
                    rnd = Random.Range(60, 74);
                    go = this.gameObject.transform.GetChild(rnd).gameObject;   
                }
            }
            //There is a 1% chance the power will be a Worm Hole
            else if(rndChance == 15)
            {
                rnd = Random.Range(75, 89);
                go = this.gameObject.transform.GetChild(rnd).gameObject; 
                while(go.activeInHierarchy)
                {
                    rnd = Random.Range(75, 89);
                    go = this.gameObject.transform.GetChild(rnd).gameObject;   
                }
            }
            //There is a 1% chance the power will be a Wrench
            else if(rndChance == 20)
            {
                rnd = Random.Range(90, maxObjects);
                go = this.gameObject.transform.GetChild(rnd).gameObject; 
                while(go.activeInHierarchy)
                {
                    rnd = Random.Range(90, maxObjects);
                    go = this.gameObject.transform.GetChild(rnd).gameObject;   
                }
            }
            //There is 14% chance the powere will be a Power
            else
            {
                rnd = Random.Range(30, 44);
                go = this.gameObject.transform.GetChild(rnd).gameObject; 
                while(go.activeInHierarchy)
                {
                    rnd = Random.Range(30, 44);
                    go = this.gameObject.transform.GetChild(rnd).gameObject;   
                }    
            }

        }
        //There is an 75% chance that an obstacle will spawn
        else
        {
            while(go.activeInHierarchy)
            {
                rnd = Random.Range(0, 29);
                go = this.gameObject.transform.GetChild(rnd).gameObject;    
            }    
        }

        return go;
    }

    void DisableAllObstacles()
    {
        int maxObjects;
        GameObject go;

        maxObjects = this.transform.childCount;
        for (int i = 0; i < maxObjects; i++)
        {
            go = this.gameObject.transform.GetChild(i).gameObject;
            if(go.activeInHierarchy)
            {
                ObjectPool.DeactivateObject(go);
            }
        }
    }
}
