#include "instantiate.h"

instantiate::instantiate()
{
  derivedclass<int> *d;
}

void instantiate::Set(derivedclass<int>* d)
{
  d->Copy(d);
}

instantiate::~instantiate()
{
}

