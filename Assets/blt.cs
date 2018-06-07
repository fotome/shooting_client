using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class blt : MonoBehaviour {
    public GameObject explosionPrefab;   //爆発エフェクトのPrefab
    public GameObject gameover;   //爆発エフェクトのPrefab
    
    
    // Use this for initialization
    void Start () {
        
    }
    
    // Update is called once per frame
    void Update () {
        transform.Translate(0, -0.05f, 0);
        
        if (transform.position.y < -5)
        {
            Destroy(gameObject);
        }
    }
    
    void OnTriggerEnter2D (Collider2D coll) {
        
        Debug.Log(coll.gameObject.name);
        if (coll.gameObject.name == "enemy02(Clone)") {
            return;
        }
        
        // 爆発エフェクトを生成する
        Instantiate (explosionPrefab, transform.position, Quaternion.identity);
        Destroy (gameObject);
        Destroy (coll.gameObject);
        Instantiate (gameover, new Vector3(0, 0, 0), Quaternion.identity);
    }
}
