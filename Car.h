#ifndef CAR_H
#define CAR_H
#include "Tyres.h"
#include "CarEngine.h"
#include <vector>

class Sensors;

class Car{
public:
  int position;//max is ten
protected:
  Tyres** tyres;//pre-set length so just array
  float fuelLevel;
  CarEngine* engine;
  vector<Sensors*> sensors;//vector in case 0,1,2 possible sensors;
  int currentTyre;
public:
  void attachSensor(Sensors* sense);
  void notifySensors();
  Car(Tyres** _tyres, CarEngine* _engine);//will decide on sensors here too
  ~Car();
  void lapPassed();
};

#endif
