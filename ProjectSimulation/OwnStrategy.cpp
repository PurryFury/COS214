#include "OwnStrategy.h"
#include "HardTyre.h"
#include "MediumTyre.h"
#include "SoftTyre.h"

OwnStrategy::OwnStrategy(){
  tyres = NULL;
}

Tyres** OwnStrategy::getTyres(){
  if(tyres != NULL){
    return tyres;
  }else{
    tyres = new Tyres*[5];
    int x;
    for(int i = 0; i < 5; i++){
      cout << "Enter number corresponding to the tyre type:" << endl;
      cout << "1. Hard Tyres" << endl;
      cout << "2. Medium Tyres" << endl;
      cout << "3. Soft Tyres" << endl;
      cin >> x;

        switch(x){
          case 1:
            tyres[i] = new HardTyre();
            cout << 1 << endl;
            break;
          case 2:
            tyres[i] = new MediumTyre();
            break;
          case 3:
            tyres[i] = new SoftTyre();
            break;
          default:
            cout << endl << "Wrong input !!!!" << endl;
            cin >> x;
            continue;
        }
      }
    return tyres;
  }
}
