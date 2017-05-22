#ifndef derivedclass_h
#define derivedclass_h

#include "baseclass.h"

template<class Type>
class __attribute__ ((visibility("default"))) derivedclass: public baseclass
{
  public:
    derivedclass() {};
    void Copy(baseclass* b);
    ~derivedclass(){};
};

template<class Type>
void derivedclass<Type>::Copy(baseclass *b)
{
  derivedclass<int>* d = dynamic_cast<derivedclass*>(b);
}

#endif
