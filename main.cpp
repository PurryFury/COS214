#include "Races.cpp"
#include "EuropeanRace.cpp"
#include "NonEuropeanRace.cpp"
#include "SoftTyre.cpp"
#include "MediumTyre.cpp"
#include "HardTyre.cpp"
#include "Tyres.cpp"

using namespace std;
int main(){
  Tyres* t1 = new SoftTyre();
  Tyres* t2 = new MediumTyre();
  Tyres* t3 = new HardTyre();

  cout << t1->getMaxSpeed() << endl;
  cout << t2->getMaxSpeed() << endl;
  cout << t3->getMaxSpeed() << endl;

  delete t1;
  delete t2;
  delete t3;

  return 0;
}
