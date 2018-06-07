using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemy01 : MonoBehaviour {
    public GameObject bulletPrefab;
    private float timeleft;
    private float timeleft2;
    private float fallSpeed;
    private float rotSpeed;
    
    public string name;
    
    void Start () {
        this.fallSpeed = 1.0f;
        timeleft2 = 4.0f;
        name = "enemy";
    }
    
    void Update () {
        
        
        timeleft2 -= Time.deltaTime;
        if (transform.position.y > 3.0f || timeleft2 <= 0.0) {
            transform.Translate( 0, -0.1f, 0);
        }
        
        if (transform.position.y < -5.5f) {
            Destroy (gameObject);
        }
        
        timeleft -= Time.deltaTime;
        if (timeleft <= 0.0) {
            //だいたい1秒ごとに処理を行う
            timeleft = 1.0f;
            Instantiate (bulletPrefab, transform.position, Quaternion.identity);
        }
    }
}
