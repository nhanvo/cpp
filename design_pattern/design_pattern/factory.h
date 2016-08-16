#ifndef __FACTORY_H__
#define __FACTORY_H__

#include <string>

using namespace std;

class Shape {
public:
	virtual void Draw() = 0;

	// Statis class to create objects
	// Change is required only in this function to create a new object type
	static Shape* Create(string type);
};

class Circle : public Shape{
public:
	void Draw();
};

class Square : public Shape {
public:
	void Draw();
};

#endif //__FACTORY_H__