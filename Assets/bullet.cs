using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bullet : MonoBehaviour {
    public GameObject explosionPrefab;   //爆発エフェクトのPrefab

	// Update is called once per frame
	void Update () {
        transform.Translate(0, 0.2f, 0);

        if (transform.position.y > 5)
        {
            Destroy(gameObject);
        }
	}
    
    void OnTriggerEnter2D (Collider2D coll) {
        if (coll.gameObject.name == "enemy02(Clone)") {
            // 爆発エフェクトを生成する
            Instantiate (explosionPrefab, transform.position, Quaternion.identity);
            Destroy (gameObject);
            Destroy (coll.gameObject);
        }
    }
}
