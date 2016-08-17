#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <set>

class MyObserver {
public:
	virtual void Notify() = 0;
};

class MyObservable {
private:
    static MyObservable* instance;
    set<MyObserver*> observers;
    MyObservable();
public:
	static MyObservable* GetInstance();
	void AddObserver(MyObserver& o);
	void RemoveObserver(MyObserver& o);
	void NotifyObservers();
	void Trigger();
};

class MyClass :public MyObserver {
private:
	MyObservable* observerable;

public:
	MyClass();
	~MyClass();
	void Notify();
};


#endif //__OBSERVER_H__
