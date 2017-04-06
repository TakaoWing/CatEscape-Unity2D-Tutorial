using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameDirector : MonoBehaviour {

	GameObject hpGame;

	void Start () {
		this.hpGame = GameObject.Find ("hpGame");
	}

	void Update () {
		
	}

	public void DecreaseHp(){
		this.hpGame.GetComponent<Image>().fillAmount -= 0.1f;
	}
}
