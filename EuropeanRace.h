#ifndef EUROPEANRACE_H
#define EUROPEANRACE_H
#include "Races.h"

class EuropeanRace: public Races{
public:
  virtual void prepare();
  virtual void travel();
};
#endif
