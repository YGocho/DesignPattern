/*
 * SysMacroCommand.cpp
 *
 *  Created on: Apr 25, 2018
 *      Author: gocho
 */

#include <algorithm>
#include <iostream>
#include <iterator>

#include "SysMacroCommand.hpp"

void SysMacroCommand::CommandExecute(void){
	std::for_each(_macroCommands.begin(), _macroCommands.end(),
			[this](SysCommand* command) {command->CommandExecute();});

}

void SysMacroCommand::Append(SysCommand* command){
	_macroCommands.push_back(command);
}

void SysMacroCommand::Undo(void){
	_macroCommands.pop_back();
}

void SysMacroCommand::Clear(void){
	_macroCommands.clear();
}
