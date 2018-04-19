/*
 * SysCommandRecierverImpl.hpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#ifndef SYSCOMMANDRECIERVERIMPL_HPP_
#define SYSCOMMANDRECIERVERIMPL_HPP_

#include <iostream>

#include "SysCommandReciever.hpp"
#include "SysCommand_Print.hpp"

class SysCommandRecieverImpl : public SysCommandReciever {
public:
	void Print(){
		std::cout << "SysCommandRecieverImpl" << std::endl;
	}
};


#endif /* SYSCOMMANDRECIERVERIMPL_HPP_ */
