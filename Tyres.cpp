#include "Tyres.h"

Tyres::Tyres(float max, float dura, float maneuver){
  maxSpeed = max;
  durability = dura;
  maneuverability = maneuver;
}

float Tyres::getMaxSpeed(){
  return maxSpeed;
}

float Tyres::getDurability(){
  return durability;
}

float Tyres::getManeuverability(){
  return maneuverability;
}

void Tyres::addDurability(float f){
  durability = durability - f;
}
