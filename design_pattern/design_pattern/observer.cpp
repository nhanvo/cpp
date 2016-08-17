#include "stdafx.h"
#include "observer .h"

MyObservable* MyObservable::instance = NULL;

MyObservable::MyObservable() {
}

MyObservable* MyObservable::GetInstance() {
	if (NULL == instance) {
		instance = new MyObservable();
	}

	return instance;
}

void MyObservable::AddObserver(MyObserver& o) {
	observers.insert(&o);
}

void MyObservable::RemoveObserver(MyObserver& o) {
	observers.erase(&o);
}

void MyObservable::NotifyObservers() {
	set<MyObserver*>::iterator itr;

	for(itr = observers.begin(); itr != observers.end(); itr++) {
		(*itr)->Notify();
	}
}

// Test method to trigger in the real scenario this is not required
void MyObservable::Trigger() {
	NotifyObservers();
}

MyClass::MyClass() {
	observerable = MyObservable::GetInstance();
	observerable->AddObserver(*this);
}

MyClass::~MyClass() {
	observerable->RemoveObserver(*this);
}

void MyClass::Notify() {
	cout << "Received a change event" << endl;
}
