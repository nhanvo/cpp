#include "stdafx.h"
#include "singleton.h"

#define STR_IN_CONSTRUCTOR "In constructor ..."

// Define default value of instance is NULL
MySingleton* MySingleton::instance = NULL;

/*
 * Constructor
 */
MySingleton::MySingleton() {
	cout << STR_IN_CONSTRUCTOR << endl;
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