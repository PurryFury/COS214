#include "Classes.cpp"
using namespace std;

int main(){
  RacingTyres* strat = new RacingTyres();

  Tyres** arr = strat->getTyres();

  for (int i = 0; i < 5; i++) {
    cout << arr[i]->getMaxSpeed() << endl;
  }

  return 0;
}
