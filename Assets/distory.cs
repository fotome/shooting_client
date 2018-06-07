using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class distory : MonoBehaviour {
    private float timeleft;

	// Use this for initialization
	void Start () {
        timeleft = 0.5f;
	}
	
	// Update is called once per frame
	void Update () {
		
        
        timeleft -= Time.deltaTime;
        if (timeleft <= 0.0) {
            //だいたい0.2秒ごとに処理を行う
            timeleft = 0.5f;
            Destroy (gameObject);
        }
	}
}
