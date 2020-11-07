#include "Classes.cpp"
using namespace std;

int main(){
  CarEngine* engine = new BDWEngine();
  RacingTyres* tyres = new RacingTyres();

  Car* car = new Car(tyres->getTyres(), engine);

  return 0;
}
