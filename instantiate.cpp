#include "instantiate.h"

instantiate::instantiate()
{
  derivedclass<int> *d;
}

void instantiate::Set(baseclass *b)
{
  derivedclass<int>* d = dynamic_cast<derivedclass<int>*>(d);
}

instantiate::~instantiate()
{
}

