#include "instantiate.h"
#include "baseclass.h"

instantiate::instantiate()
{
  derivedclass<int> *d;
  baseclass* b = dynamic_cast<baseclass*>(d);
}

instantiate::~instantiate()
{
}

