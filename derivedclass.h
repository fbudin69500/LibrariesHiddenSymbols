#ifndef derivedclass_h
#define derivedclass_h

#include "baseclass.h"

template<class Type>
class __attribute__ ((visibility("default"))) derivedclass: public baseclass
{
  public:
    derivedclass() {};
    ~derivedclass(){};
};

#endif
