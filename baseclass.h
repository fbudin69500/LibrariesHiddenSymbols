#ifndef baseclass_h
#define baseclass_h

class baseclass
{
  public:
  baseclass();
  ~baseclass();
  virtual void Copy(baseclass* b) {};
};

#endif
