//============================================================================
// Name        : CommandPattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "SysCommand_Print.hpp"
#include "SysCommandRecierverImpl.hpp"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	SysCommandPrint printObj;
	SysCommand *obj = &printObj;

	SysCommandRecieverImpl receiverImpl;

	obj->setReciever(&receiverImpl);

	obj->CommandExecute();


	return 0;
}
