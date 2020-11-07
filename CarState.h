#ifndef CARSTATE_H
#define CARSTATE_H

class Car;

class CarState{
public:
  virtual void handle(Car* car) = 0;
};

#endif
