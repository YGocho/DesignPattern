/*
 * SysCommand_print.cpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#include <iostream>
#include "SysCommand_Print2.hpp"

int SysCommandPrint2::CommandExecute(void){
	reciever->Print();

	return 0;
}

void SysCommandPrint2::setReciever(SysCommandReciever* receiver){
	this->reciever = receiver;
}
