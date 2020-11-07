#include "Car.h"
#include "Sensors.h"

void Car::attachSensor(Sensors* sense){
  sensors.push_back(sense);
}

void Car::notifySensors(){
  for(vector<Sensors*>::iterator it = sensors.begin(); it != sensors.end(); it++){
    (*it)->checkStatus();
  }
}

Car::Car(Tyres** _tyres, CarEngine* _engine){
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
}

void Car::lapPassed(){
  fuelLevel = fuelLevel - engine->getFuelConsumption();
  fuelLevel = fuelLevel - 9.2f;
  tyres[currentTyre]->addDurability(7.3f);
  //notify sensors
  notifySensors();
}
