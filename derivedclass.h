#ifndef derivedclass_h
#define derivedclass_h

#include "baseclass.h"

template<class Type>
class derivedclass: public baseclass
{
  public:
    derivedclass() {};
    ~derivedclass(){};
};

#endif
