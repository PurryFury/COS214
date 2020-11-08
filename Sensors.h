#ifndef SENSORS_H
#define SENSORS_H
#include "Car.h"
#include "Engineer.h"
#include "Crew.h"

class Sensors{
protected:
  Engineer* engineer;
  Car* car;
  Crew* crew;//to communicate with chain of responsibility when on pitstop;
public:
  Sensors(Car* c, Engineer* e);
  virtual void checkStatus() = 0;
  ~Sensors();
};

#endif
