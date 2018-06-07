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
        
            float tx = touch.deltaPosition.x;
            float sensitivity = 0.2f; // いわゆる感度
            float mouse_move_x = System.Math.Sign(tx) * sensitivity;
        
            transform.Translate(mouse_move_x, 0, 0);
        }
    
        timeleft -= Time.deltaTime;
        if (timeleft <= 0.0) {
            //だいたい0.2秒ごとに処理を行う
            timeleft = 0.2f;
            Instantiate (bulletPrefab, transform.position, Quaternion.identity);
        }
    }
}
