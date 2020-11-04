#include "Races.cpp"
#include "EuropeanRace.cpp"
#include "NonEuropeanRace.cpp"

using namespace std;
int main(){
  Races* race1 = new EuropeanRace();
  Races* race2 = new NonEuropeanRace();

  race1->describe();
  cout << endl << endl;
  race2->describe();

  delete race1;
  delete race2;
  return 0;
}
