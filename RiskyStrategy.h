#ifndef RISKYSTRATEGY_H
#define RISKYSTRATEGY_H
#include "RacingStrategy.h"

class RiskyStrategy:public RacingStrategy{
public:
  RiskyStrategy();//sets pointer to null
  virtual Tyres** getTyres();//makes or just returns the pointer to tyres
};

#endif
