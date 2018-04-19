/*
 * SysCommand_Print.hpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#ifndef SYSCOMMAND_PRINT2_HPP_
#define SYSCOMMAND_PRINT2_HPP_


#include "SysCommand.hpp"
#include "SysCommandReciever.hpp"

class SysCommandPrint2 : public SysCommand {

public:
	int CommandExecute(void);
	void setReciever(SysCommandReciever* reciever);

protected:
	SysCommandReciever* reciever;

};



#endif /* SYSCOMMAND_PRINT2_HPP_ */
