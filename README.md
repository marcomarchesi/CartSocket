CartSocket
==========

Implementation
==============

Unity
-----

'using UnityEngine;
using System.Collections;
using System;
using System.Runtime.InteropServices;

public class Socket : MonoBehaviour {


	[DllImport ("CartSocket",EntryPoint="Test")]
	private static extern int test();
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Debug.Log ((int)test ());
	}
}'



