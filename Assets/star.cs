using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class star : MonoBehaviour {

	// Use this for initialization
	void Start () {
        float sca = Random.Range(0.1f, 0.01f);
        transform.localScale = new Vector3(sca,sca,sca);
	}
	
	// Update is called once per frame
	void Update () {
        transform.Translate( 0, -0.01f, 0);
        
        if (transform.position.y < -5.5f) {
            Destroy (gameObject);
        }
		
	}
}
