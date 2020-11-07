#include "RaceState.h"

void RaceState::handle(Car* car){
  car->setFuleLevel(car->getFuelLevel() - car->getEngine()->getFuelConsumption());
  car->getTyres()[car->getCurrent()]->addDurability(-7.3f);
  //notify sensors
  car->notifySensors();//sensors toggle state when going to pitstop
}
