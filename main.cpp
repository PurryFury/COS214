#include "Classes.cpp"
using namespace std;

int main(){
  CarBuilder* Ebuilder = new OrderEngine();
  CarBuilder* Tbuilder = new OrderTyres();


  Ebuilder->orderPart();
  Tbuilder->orderPart();

  Car* car = new Car(Tbuilder->getTyres(), Ebuilder->getEngine());

  Sensors* s1 = new FuelSensor(car, NULL);
  Sensors* s2 = new TyreSensor(car, NULL);

  car->attachSensor(s1);
  car->attachSensor(s2);

  car->lapPassed();

  delete Ebuilder;
  delete Tbuilder;
  delete car;
  return 0;
}
