#ifndef NONEUROPEANRACE_H
#define NONEUROPEANRACE_H
#include "Races.h"

class NonEuropeanRace:public Races{
public:
  virtual void prepare();
  virtual void travel();
};

#endif
