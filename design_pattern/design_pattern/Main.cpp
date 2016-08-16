// design_pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// Singleton test
	cout << "TEST SINGLETON" << endl;
	MySingleton* obj;
	obj  = MySingleton::getInstance();

	// Factory test
	cout << "TEST FACTORY" << endl;
	Shape* shape_1 = Shape::Create(STR_CIRCLE);
	Shape* shape_2 = Shape::Create(STR_SQUARE);

	shape_1->Draw();
	shape_2->Draw();

	// Abstract factory test
	cout << "TEST ABSTRACT FACTORY" << endl;
	MobileFactory* myFactory = new MobileFactory();
	Mobile* mobile_low = myFactory->getMobile(STR_LOW_END);
	if (NULL != mobile_low) mobile_low->PrintSpecs();

	Mobile* mobile_high = myFactory->getMobile(STR_HIGH_END);
	if(NULL != mobile_high) mobile_high->PrintSpecs();

	getchar();
	return 0;
}

