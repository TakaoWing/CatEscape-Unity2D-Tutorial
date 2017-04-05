using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowGenerator : MonoBehaviour {

	public GameObject arrowPrefab;
	float span = 1.0f;
	float delta = 0;

	void Start () {
	}

	void Update () {
		this.delta += Time.deltaTime;

		if(this.delta > this.span){ // span秒ごとに矢を作成
			this.delta = 0;
			GameObject go = Instantiate (arrowPrefab) as GameObject; // GameObject型にキャスト
			int px = Random.Range (-6, 7); // -6から7の乱数をpxに代入
			go.transform.position = new Vector3 (px, 7, 0);
		}
	}
}
