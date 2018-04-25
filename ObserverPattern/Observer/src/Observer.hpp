/*
 * Observer.hpp
 *
 *  Created on: Apr 23, 2018
 *      Author: gocho
 */

#ifndef OBSERVER_HPP_
#define OBSERVER_HPP_

class Subject;

class SysObserver {
public:
	~SysObserver(){}
	virtual void update(Subject* subject) = 0;

};



#endif /* OBSERVER_HPP_ */
