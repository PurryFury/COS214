#ifndef FUELSENSOR_H
#define FUELSENSOR_H
#include "Sensors.h"

class FuelSensor:public Sensors{
public:
  FuelSensor(Car* c, Engineer* e);
  virtual void checkStatus();
};

#endif
