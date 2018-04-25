/*
 * ConcreateSysObserver.hpp
 *
 *  Created on: Apr 23, 2018
 *      Author: gocho
 */

#ifndef CONCREATESYSOBSERVER_HPP_
#define CONCREATESYSOBSERVER_HPP_

#include "Observer.hpp"
#include "Subject.hpp"

class ConcreateSysObserver : public SysObserver {
public:
	void update(Subject* subject);
};



#endif /* CONCREATESYSOBSERVER_HPP_ */
