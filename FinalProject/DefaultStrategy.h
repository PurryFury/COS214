#ifndef DEFAULTSTRATEGY_H
#define DEFAULTSTRATEGY_H
#include "RacingStrategy.h"

class DefaultStrategy:public RacingStrategy{
public:
  DefaultStrategy();//sets pointer to null
  virtual Tyres** getTyres();//makes or just returns the pointer to tyres
};

#endif
