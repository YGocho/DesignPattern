/*
 * SysCommand_print.cpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#include <iostream>
#include "SysCommand_Print2.hpp"

void SysCommandPrint2::CommandExecute(void){
	reciever->Print();
}

void SysCommandPrint2::setReciever(SysCommandReciever* receiver){
	this->reciever = receiver;
}
