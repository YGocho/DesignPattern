/*
 * SysMacroCommand.hpp
 *
 *  Created on: Apr 25, 2018
 *      Author: gocho
 */

#ifndef SYSMACROCOMMAND_HPP_
#define SYSMACROCOMMAND_HPP_

#include "SysCommand.hpp"
#include <vector>

class SysMacroCommand : public SysCommand {
public:
	void CommandExecute(void);
	void Append(SysCommand *command);
	void Undo(void);
	void Clear(void);
	void setReciever(SysCommandReciever* reciever){}

private:
	std::vector<SysCommand*> _macroCommands;
};



#endif /* SYSMACROCOMMAND_HPP_ */
