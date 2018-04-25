/*
 * main.cpp
 *
 *  Created on: Apr 23, 2018
 *      Author: gocho
 */



#include <iostream>

#include "ConcreateSubject.hpp"
#include "ConcreateSysObserver.hpp"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	ConcreateSubject subject;
	ConcreateSysObserver sysobs;
	ConcreateSysObserver sysobs2;

	SysObserver *obs = &sysobs;
	SysObserver *obs2 = &sysobs2;

	subject.AddObserver(obs);
	subject.AddObserver(obs2);
	subject.Print();
	subject.deleteObserver(obs);
	subject.deleteObserver(obs2);

	return 0;
}


