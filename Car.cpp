#include "Car.h"
#include "Sensors.h"
#include "RaceState.h"
#include "PitStopState.h"

void Car::attachSensor(Sensors* sense){
  sensors.push_back(sense);
}

void Car::notifySensors(){
  for(vector<Sensors*>::iterator it = sensors.begin(); it != sensors.end(); it++){
    (*it)->checkStatus();
  }
}

CarState* getState(){
  return state;
}

void toggleState(){
  delete state;
  if(raceState){
    state = new PitStopState();
    raceState = false;
  }else{
    state = new RaceState();
    raceState = true;
  }
}


Car::Car(Tyres** _tyres = NULL, CarEngine* _engine = NULL){
  state = new RaceState();
  raceState = true;
  tyres = _tyres;
  engine = _engine;
  fuelLevel = 100.0f;

  cout << "Choose a set of tyres to start with:" << endl;
  for(int i = 1; i < 6; i++){
    cout << i << ". " << "Speed: " << tyres[i-1]->getMaxSpeed() << "; Durability: " << tyres[i-1]->getDurability() << "; Maneuverability: " << tyres[i-1]->getManeuverability() << endl;
  }
  int x;
  cin >> x;
  x--;

  while(x >= 5){
    cout << "Wrong input!!!" << endl;
    cin >> x;
    x--;
  }

  currentTyre = x;
  cout << tyres[currentTyre]->getDurability() << endl;
}

Car::~Car(){
  delete engine;
  delete state;
  //delete sensors here as well;
}

void Car::lapPassed(){
  state->handle(this);
}

CarEngine* Car::getEngine(){
  return engine;
}

Tyres** Car::getTyres(){
  return tyres;
}

int Car::getCurrent(){
  return currentTyre;
}

void Car::setCurrent(int i){
  currentTyre = i;
}

void Car::setEngine(CarEngine* e){
  engine = e;
}

void Car::setTyres(Tyres** t){
  tyres = t;
}

void Car::resetFuel(){
  fuelLevel = 100.0f;
}

float Car::getFuelLevel(){
  return fuelLevel;
}

void Car::setFuelLevel(float fuel){
  fuelLevel = fuel;
}
