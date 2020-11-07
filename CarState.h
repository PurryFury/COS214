#ifndef CARSTATE_H
#define CARSTATE_H
#include "Car.h"

class CarState{
public:
  virtual void handle(Car* car) = 0;
};

#endif
