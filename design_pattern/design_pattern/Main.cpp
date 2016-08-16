// design_pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// Single ton test
	MySingleton* obj;
	obj  = MySingleton::getInstance();

	Shape* shape_1 = Shape::Create(STR_CIRCLE);
	Shape* shape_2 = Shape::Create(STR_SQUARE);

	shape_1->Draw();
	shape_2->Draw();

	getchar();
	return 0;
}

