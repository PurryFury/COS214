#include "RacingTyres.h"
#include "RiskyStrategy.h"
#include "DefaultStrategy.h"
#include "RainyStrategy.h"
#include "OwnStrategy.h"
#include <iostream>

using namespace std;

RacingTyres::RacingTyres(){
  cout << "Please enter the numbercorresponding to the tyre strategy" << endl;
  cout << "1. Risky (3 Hard, 2 Medium)" << endl;
  cout << "2. Default (1 Hard, 2 Medium, 2 Soft)" << endl;
  cout << "3. Rainy (2 Medium, 3 Soft)" << endl;
  cout << "4. Choose specific tyres" << endl;
  int i;
  cin >> i;
  while(true){
    switch(i){
      case 1:
        strat = new RiskyStrategy();
        break;
      case 2:
        strat = new DefaultStrategy();
        break;
      case 3:
        strat = new RainyStrategy();
        break;
      case 4:
        strat = new OwnStrategy();
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

RacingTyres::~RacingTyres(){
  delete strat;
}
