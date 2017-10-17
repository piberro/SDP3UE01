///////////////////////////////////////////////////////////////////////////////////
// Workfile : quotation.h
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : quotation (Interface)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#ifndef FLOOR_H
#define FLOOR_H

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>

#include "Object.h"
#include "Flat.h"

class Floor : public Object{
public:
	Floor() = default;
	void addFlat(Flat &FlatToAdd);
	void Print() const;
private:
	std::vector<Flat> mFlats;
};


#endif
