///////////////////////////////////////////////////////////////////////////////////
// Workfile : main.cpp
// Author   : Robert PIBERNIG
// Date     : 15. 03. 2017
// Description : Testdriver for <template> module
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include "HouseManager.h"

#include <vld.h>

using namespace std;

//testdriver
int main()
{
	HouseManager myMH;
	
	Person myPerson = Person("Max", "Muster", 1969);

	Floor myFloor1 = Floor();
	myFloor1.addFlat(Flat(1, 69, true, myPerson));
	myFloor1.addFlat(Flat(2, 69, true, myPerson));
	myFloor1.addFlat(Flat(3, 69, true, myPerson));

	Floor myFloor2 = Floor();
	myFloor2.addFlat(Flat(1, 69, true, myPerson));
	myFloor2.addFlat(Flat(2, 69, true, myPerson));
	myFloor2.addFlat(Flat(3, 69, true, myPerson));


	House myHouse = House(Address("Musterstrasze 123", 1234, "Musterstadt", "Musterland"),myFloor1);
	myHouse.addFloor(myFloor2);

	myMH.addHouse(myHouse);

	myMH.Print();
	

	return 0;
}