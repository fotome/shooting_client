using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rocket : MonoBehaviour {
    public GameObject bulletPrefab;
    private float timeleft;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.touchCount > 0) {
            
            Touch touch = Input.GetTouch (0);
        
            float x = touch.deltaPosition.x;
            float y = touch.deltaPosition.y;
            float sensitivity = 0.2f; // いわゆる感度
            float move_x = System.Math.Sign(x) * sensitivity;
            float move_y = System.Math.Sign(y) * sensitivity;
        
            transform.Translate(move_x, move_y, 0);
        }
    
        timeleft -= Time.deltaTime;
        if (timeleft <= 0.0) {
            //だいたい0.2秒ごとに処理を行う
            timeleft = 0.2f;
            Instantiate (bulletPrefab, transform.position, Quaternion.identity);
        }
    }
}
