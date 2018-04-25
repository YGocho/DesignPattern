/*
 * ConcreateSubject.cpp
 *
 *  Created on: Apr 23, 2018
 *      Author: gocho
 */


#include "ConcreateSubject.hpp"

#include "Subject.hpp"

void ConcreateSubject::Print(){
	NotifyObserver();
}
