/*
 * SysCommand_Print.hpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#ifndef SYSCOMMAND_PRINT_HPP_
#define SYSCOMMAND_PRINT_HPP_


#include "SysCommand.hpp"
#include "SysCommandReciever.hpp"

class SysCommandPrint : public SysCommand {

public:
	int CommandExecute(void);
	void setReciever(SysCommandReciever* reciever);

protected:
	SysCommandReciever* reciever;

};



#endif /* SYSCOMMAND_PRINT_HPP_ */
