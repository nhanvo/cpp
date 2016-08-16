#include "stdafx.h"
#include "factory.h"

#define STR_I_AM "I am "

Shape* Shape::Create(string type) {
	if (STR_CIRCLE == type) return new Circle();
	if (STR_SQUARE == type) return new Square();
	return NULL;
}

void Circle::Draw() {
	cout << STR_I_AM << STR_CIRCLE << endl;
}

void Square::Draw() {
	cout << STR_I_AM << STR_SQUARE << endl;
}