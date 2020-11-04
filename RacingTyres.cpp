#include "RacingTyres.h"
#include "RiskyStrategy.h"
#include <iostream>

using namespace std;

RacingTyres::RacingTyres(){
  cout << "Please enter the numbercorresponding to the tyre strategy" << endl;
  cout << "1. Risky (3 Hard, 2 Medium)" << endl;
  int i;
  cin >> i;
  while(true){
    switch(i){
      case 1:
        strat = new RiskyStrategy();
        break;
      default:
        cout << "No such choice" << endl;
        cin >> i;
        continue;
      }
    break;
  }
}

Tyres** RacingTyres::getTyres(){
  return strat->getTyres();
}
