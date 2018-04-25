/*
 * Subject.hpp
 *
 *  Created on: Apr 23, 2018
 *      Author: gocho
 */

#ifndef SUBJECT_HPP_
#define SUBJECT_HPP_

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

#include "Observer.hpp"

class Subject {
public:
	~Subject() {
		for (auto iter = _obs.begin(); iter != _obs.end(); iter++){
			deleteObserver(*iter);
		}

	}

	void AddObserver(SysObserver* o) {
		if (std::find(_obs.begin(), _obs.end(), o) == _obs.end()) {
			_obs.push_back(o);
		}
	}
	void deleteObserver(SysObserver* o) {
		auto iter = std::find(_obs.begin(), _obs.end(), o);
		if (iter != _obs.end()) {
			std::cout << "deleteObserver" << std::endl;
			_obs.erase(iter);
		}
	}
	void NotifyObserver(void) {
		std::for_each(_obs.begin(), _obs.end(),
				[this](SysObserver* o) {o->update(this);});

	}

	virtual void Print(void) = 0;

private:
	std::vector<SysObserver*> _obs;
};

#endif /* SUBJECT_HPP_ */
