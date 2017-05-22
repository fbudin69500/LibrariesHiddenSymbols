#ifndef instantiate_h
#define instantiate_h

#include "derivedclass.h"

class instantiate
{
  public:
    instantiate();
    void Set(derivedclass<int> *b);
    ~instantiate();
    
  private:
    derivedclass<int> m_d;
};

#endif
