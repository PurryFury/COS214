#ifndef OWNSTRATEGY_H
#define OWNSTRATEGY_H
#include "RacingStrategy.h"

class OwnStrategy:public RacingStrategy{
public:
  OwnStrategy();
  virtual Tyres** getTyres();
};

#endif
