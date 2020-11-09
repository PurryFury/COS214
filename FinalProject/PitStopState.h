#ifndef PITSTOPSTATE_H
#define PITSTOPSTATE_H
#include "CarState.h"

class PitStopState:public CarState{
public:
  virtual void handle(Car* car);
};

#endif
