/*
 * SysCommand.hpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#ifndef SYSCOMMAND_HPP_
#define SYSCOMMAND_HPP_

#include "SysCommandReciever.hpp"

class SysCommand {
public:
	virtual ~SysCommand(){};
	virtual int CommandExecute(void) = 0;
	virtual void setReciever(SysCommandReciever* reciever) = 0;
};



#endif /* SYSCOMMAND_HPP_ */
