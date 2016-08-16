#include "stdafx.h"
#include "abstract_factory.h"

void Mobile::PrintSpecs() {
	cout << Camera() << endl;
	cout << KeyBoard() << endl;
}

string LowEndMobile::Camera() {
	return "2 MegaPixel";
}

string LowEndMobile::KeyBoard() {
	return "ITU-T";
}

string HighEndMobile::Camera() {
	return "5 MegaPixel";
}

string HighEndMobile::KeyBoard() {
	return "Qwerty";
}

Mobile* MobileFactory::getMobile(string type) {
	if(STR_LOW_END == type) return new LowEndMobile();
	if(STR_HIGH_END == type) return new HighEndMobile();
	return NULL;
}