///////////////////////////////////////////////////////////////////////////////////
// Workfile : template.cpp
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : template (Implementation)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#include "Flat.h"


using namespace std;

void Flat::Print() const {
	cout << "    Flat " << mNumber << ", " << mSize << "qm, ";
	if (mBalcony) {
		cout << "with balcony";
	} else {
		cout << "no balcony";
	}
	cout << ": ";
	mRenter.Print();
	cout << endl;
}
