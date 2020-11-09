#ifndef RAINYSTRATEGY_H
#define RAINYSTRATEGY_H
#include "RacingStrategy.h"

class RainyStrategy:public RacingStrategy{
public:
  RainyStrategy();
  virtual Tyres** getTyres();
};

#endif
