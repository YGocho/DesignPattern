//============================================================================
// Name        : VirtualFunc.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#if 0
#include <iostream>
using namespace std;

class Base {
public:
	virtual ~Base(){}
	virtual void Paint() = 0;
};

class Love : public Base {
public:
	void Paint() {
		cout << "Love" << endl;
	}
};

class Kitty : public Base {
public:
	void Paint() {
		cout << "Kitty" << endl;
	}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

//	Love obj1 = new Love();
//	Kitty obj2 = new Kitty();
	Love obj1;
	Kitty obj2;
	Base *po1 = &obj1;
	Base *po2 = &obj2;

//	Base ba;

	po1->Paint();
	po2->Paint();


	return 0;
}
#endif
