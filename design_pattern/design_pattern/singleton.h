#ifndef __SINGLETON_H__
#define __SINGLETON_H__

// Singleton class
class MySingleton {
public:
	static MySingleton* instance;

public:
	static MySingleton* getInstance();

private:
	// Private constructor
	MySingleton();
};

#endif //__SINGLETON_H__