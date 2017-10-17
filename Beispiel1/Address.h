///////////////////////////////////////////////////////////////////////////////////
// Workfile : Address.h
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : quotation (Interface)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>

#include "Object.h"
// constants

// typedefs

class Address : public Object{
public:
	Address() = default;
	Address(std::string StreetnNr, size_t PostCode, std::string City, std::string Country) : mStreetnNr(StreetnNr), mPostCode(PostCode), mCity(City), mCountry(Country) {};
	void Print() const;
private:
	std::string mStreetnNr;
	size_t mPostCode;
	std::string mCity;
	std::string mCountry;
};


#endif
