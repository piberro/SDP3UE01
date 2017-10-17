///////////////////////////////////////////////////////////////////////////////////
// Workfile : template.cpp
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : template (Implementation)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#include "Person.h"


using namespace std;

void Person::Print() const {
	cout << mVorname << " " << mNachname << " (" << mGeburtsjahr << ")";
}

