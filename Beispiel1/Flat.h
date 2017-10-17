///////////////////////////////////////////////////////////////////////////////////
// Workfile : quotation.h
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : quotation (Interface)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#ifndef FLAT_H
#define FLAT_H

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>

#include "Object.h"
#include "Person.h"

class Flat : public Object {
public:
	Flat(size_t Number, size_t Size, bool Balcony, Person Renter) : mNumber(Number), mSize(Size), mBalcony(Balcony), mRenter(Renter) {};
	void Print() const;
private:
	size_t mNumber;
	size_t mSize;
	bool mBalcony;
	Person mRenter;
};


#endif
