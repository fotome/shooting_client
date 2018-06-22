using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class generator : MonoBehaviour {
    public GameObject rockPrefab;
    public GameObject starPrefab;
    
    
    private float starZ;
    
    void Start () {
        
        InvokeRepeating ("GenRock", 1, 1);
        
        for (int i = 0; i < 30 ; i++) {
            Instantiate (starPrefab, new Vector3 (-2.5f + 5 * Random.value, -5.0f + 10 * Random.value, 20), Quaternion.identity);
        }
        
        InvokeRepeating ("ranStar", 0.1f, 0.5f);
    }
    
    void GenRock () {
        Instantiate (rockPrefab, new Vector3 (-2.5f + 5 * Random.value, 6, 0), Quaternion.identity);
    }
    void ranStar () {
        Instantiate (starPrefab, new Vector3 (-2.5f + 5 * Random.value, 6, 20), Quaternion.identity);
    }
}
