///////////////////////////////////////////////////////////////////////////////////
// Workfile : quotation.h
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : quotation (Interface)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>

#include "Object.h"

class Person : public Object{
public:
	Person(std::string Vorname, std::string Nachname, size_t Geburtsjahr) : mVorname(Vorname), mNachname(Nachname), mGeburtsjahr(Geburtsjahr) {};
	void Print() const;
private:
	std::string mVorname;
	std::string mNachname;
	size_t mGeburtsjahr;
};

#endif
