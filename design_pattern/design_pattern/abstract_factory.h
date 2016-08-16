#ifndef __ABSTRACT_FACTORY_H__
#define __ABSTRACT_FACTORY_H__

#include <string>

using namespace std;

class Mobile {
public:
	virtual string Camera() = 0;
	virtual string KeyBoard() = 0;

	void PrintSpecs();
};


class LowEndMobile : public Mobile {
public:
	string Camera();
	string KeyBoard();
};

class HighEndMobile : public Mobile {
public:
	string Camera();
	string KeyBoard();
};

class MobileFactory {
public:
	Mobile* getMobile(string type);
};


#endif //__ABSTRACT_FACTORY_H__