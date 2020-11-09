#ifndef RACESTATE_H
#define RACESTATE_H
#include "CarState.h"

class RaceState: public CarState{
public:
  virtual void handle(Car* car);
};

#endif
