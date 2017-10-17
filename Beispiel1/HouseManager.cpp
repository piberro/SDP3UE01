///////////////////////////////////////////////////////////////////////////////////
// Workfile : template.cpp
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : template (Implementation)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#include "HouseManager.h"

using namespace std;

void HouseManager::addHouse(House &HouseToAdd) {
	this->mHouses.push_back(HouseToAdd);
}

void HouseManager::Print() const {
	cout << "HouseManager" << endl;
	for (auto it = mHouses.cbegin(); it != mHouses.cend(); it++) {
		(*it).Print();
	}
}

