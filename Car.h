#ifndef CAR_H
#define CAR_H
#include "Tyres.h"
#include "CarEngine.h"
#include "CarState.h"
#include <vector>

class Sensors;

class Car{
public:
  int position;//max is ten
protected:
  bool raceState;
  CarState* state;
  Tyres** tyres;//pre-set length so just array
  float fuelLevel;
  CarEngine* engine;
  vector<Sensors*> sensors;//vector in case 0,1,2 possible sensors;
  int currentTyre;
public:
  CarState* getState();
  void toggleState();
  void attachSensor(Sensors* sense);
  void notifySensors();
  Car(Tyres** _tyres, CarEngine* _engine);//will decide on sensors here too
  ~Car();
  void lapPassed();//request function
  CarEngine* getEngine();
  Tyres** getTyres();
  float getFuelLevel();
  int getCurrent();
  void setCurrent(int i);
  void setEngine(CarEngine* e);
  void setTyres(Tyres** t);
  void setFuelLevel(float fuel);
  void resetFuel();
};

#endif
