///////////////////////////////////////////////////////////////////////////////////
// Workfile : quotation.h
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : quotation (Interface)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#ifndef HOUSEMANAGER_H
#define HOUSEMANAGER_H

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>

#include "Object.h"
#include "House.h"

class HouseManager : public Object{
public:
	HouseManager() = default;
	void addHouse(House &HouseToAdd);
	void Print() const;

private:
	std::vector<House> mHouses;
};

#endif
