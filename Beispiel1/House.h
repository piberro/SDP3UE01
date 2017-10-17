///////////////////////////////////////////////////////////////////////////////////
// Workfile : quotation.h
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : quotation (Interface)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#ifndef HOUSE_H
#define HOUSE_H

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>

#include "Object.h"
#include "Floor.h"
#include "Address.h"

class House : public Object {
public:
	House(Address &Address, Floor &Floor);
	void addFloor(Floor &FloorToAdd);
	void Print() const;
private:
	Address mAddress;
	std::vector<Floor> mFloors;
};


#endif
