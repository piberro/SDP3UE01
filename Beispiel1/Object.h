///////////////////////////////////////////////////////////////////////////////////
// Workfile : Object.h
// Author   : Robert PIBERNIG
// Date     : 16.10.2017
// Description : Object Base Class (Interface)
// Remarks  : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////////////

#ifndef OBJECT_H
#define OBJECT_H

// baseclass for all derived objects
class Object
{
public:
   virtual ~Object() = default;

protected:
   //Default-CTor: Benutzer kann kein Object erzeugen
   Object() = default;

};

#endif
