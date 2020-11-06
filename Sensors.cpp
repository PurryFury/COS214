#include "Sensors.h"

Sensors::Sensors(Car* c, Engineer* e){
  car = c;
  engineer = e;
  //populate crew here somehow, left at NULL for now
  crew = NULL;
  //idk maybe create list here, but this will force to make a set for each sensor
}
