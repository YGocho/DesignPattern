/*
 * SysCommandReciever.hpp
 *
 *  Created on: Apr 18, 2018
 *      Author: gocho
 */

#ifndef SYSCOMMANDRECIEVER_HPP_
#define SYSCOMMANDRECIEVER_HPP_


class SysCommandReciever {
public:
	virtual ~SysCommandReciever(){}
	virtual void Print() = 0;
};


#endif /* SYSCOMMANDRECIEVER_HPP_ */
