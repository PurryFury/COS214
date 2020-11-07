#ifndef TYRESENSOR_H
#define TYRESENSOR_H
#include "Sensors.h"

class TyreSensor:public Sensors{
public:
  TyreSensor(Car* c, Engineer* e);
  virtual void checkStatus();
};

#endif
