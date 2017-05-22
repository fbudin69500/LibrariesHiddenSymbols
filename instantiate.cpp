#include "instantiate.h"

instantiate::instantiate()
{
}

void instantiate::Set(derivedclass<int>* d)
{
  d->Copy(d);
}

instantiate::~instantiate()
{
}

