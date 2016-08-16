#include "stdafx.h"
#include "singleton.h"

// Define default value of instance is NULL
MySingleton* MySingleton::instance = NULL;

/*
 * Constructor
 */
MySingleton::MySingleton() {
	cout << "In constructor..." << endl;
}

/*
 * Get instance is only once
 */
MySingleton* MySingleton::getInstance() {
	if(NULL == instance) {
		instance = new MySingleton();
	}

	return instance;
}