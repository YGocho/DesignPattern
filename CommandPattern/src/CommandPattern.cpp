//============================================================================
// Name        : CommandPattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "SysCommand_Print.hpp"
#include "SysCommand_Print2.hpp"
#include "SysCommandRecierverImpl.hpp"
#include "SysCommandRecierverImpl2.hpp"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	SysCommandPrint printObj;
	SysCommand *obj = &printObj;
	SysCommandPrint2 printObj2;
	SysCommand *obj2 = &printObj2;

	SysCommandRecieverImpl receiverImpl;
	SysCommandRecieverImpl2 receiverImpl2;

	obj->setReciever(&receiverImpl);
	obj->CommandExecute();

	obj2->setReciever(&receiverImpl2);
	obj2->CommandExecute();

	return 0;
}
