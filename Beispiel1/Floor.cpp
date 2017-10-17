///////////////////////////////////////////////////////////////////////////////////
// Workfile : template.cpp
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : template (Implementation)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#include "Floor.h"


using namespace std;

void Floor::addFlat(Flat &FlatToAdd) {
	mFlats.push_back(FlatToAdd);
}

void Floor::Print() const {
	for (auto it = mFlats.cbegin(); it != mFlats.cend(); it++) {
		(*it).Print();
	}
}
