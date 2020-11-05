#include "CarEngine.h"

CarEngine::CarEngine(float s, float fuel){
  speed = s;
  fuelConsumption = fuel;
}

float CarEngine::getSpeed(){
  return speed;
}

float CarEngine::getFuelConsumption(){
  return fuelConsumption;
}
