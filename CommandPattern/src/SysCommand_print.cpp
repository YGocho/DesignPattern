/*
 * SysCommand_print.cpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#include <iostream>
#include "SysCommand_Print.hpp"

int SysCommandPrint::CommandExecute(void){
	reciever->Print();

	return 0;
}

void SysCommandPrint::setReciever(SysCommandReciever* receiver){
	this->reciever = receiver;
}
