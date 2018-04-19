/*
 * SysCommandRecierverImpl.hpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#ifndef SYSCOMMANDRECIERVERIMPL2_HPP_
#define SYSCOMMANDRECIERVERIMPL2_HPP_

#include <iostream>

#include "SysCommandReciever.hpp"
#include "SysCommand_Print.hpp"

class SysCommandRecieverImpl2 : public SysCommandReciever {
public:
	void Print(){
		std::cout << "SysCommandRecieverImpl2" << std::endl;
	}
};


#endif /* SYSCOMMANDRECIERVERIMPL2_HPP_ */
