#ifndef EUROPEANRACE_H
#define EUROPEANRACE_H
#include "Races.h"

class EuropeanRace: public Races{
public:
  EuropeanRace(int x, string y) : Races(x,y){};
  virtual void prepare();
  virtual void travel();
};
#endif
