///////////////////////////////////////////////////////////////////////////////////
// Workfile : template.cpp
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : template (Implementation)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#include "Address.h"


using namespace std;

void Address::Print() const {
	cout << mStreetnNr << ", " << mPostCode << " " << mCity;
}
