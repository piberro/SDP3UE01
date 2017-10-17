///////////////////////////////////////////////////////////////////////////////////
// Workfile : template.cpp
// Author   : Robert PIBERNIG
// Date     : 09.05.2017
// Description : template (Implementation)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#include "House.h"


using namespace std;

House::House(Address &Address, Floor &Floor) {
	mAddress = Address;
	mFloors.push_back(Floor);
}

void House::addFloor(Floor &FloorToAdd) {
	mFloors.push_back(FloorToAdd);
}

void House::Print() const {
	cout << "House: ";
	mAddress.Print();
	cout << ", " << mFloors.size() << " floors" << endl;
	size_t i = 0;
	for (auto it = mFloors.cbegin(); it != mFloors.cend(); it++) {
		cout << "  Floor " << i++ << endl;
		(*it).Print();
	}
}
