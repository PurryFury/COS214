#ifndef NONEUROPEANRACE_H
#define NONEUROPEANRACE_H
#include "Races.h"

class NonEuropeanRace:public Races{
public:
  NonEuropeanRace(int x, string y) : Races(x,y){};
  virtual void prepare();
  virtual void travel();
};

#endif
