#ifndef RACINGSTRATEGY_H
#define RACINGSTRATEGY_H
#include "Tyres.h"

class RacingStrategy{
protected:
  Tyres** tyres;
public:
  virtual Tyres** getTyres() = 0;
};

#endif
