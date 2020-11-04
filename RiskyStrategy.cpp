#include "RiskyStrategy.h"
#include "HardTyre.h"
#include "MediumTyre.h"

RiskyStrategy::RiskyStrategy(){
  tyres = NULL;
}

Tyres** RiskyStrategy::getTyres(){
  if(tyres != NULL){
    return tyres;
  }else{
    //make 3 hard 2 medium
    tyres = new Tyres*[5];//only 5 tyres allowed
    for(int i = 0; i < 3; i++){
      tyres[i] = new HardTyre();
    }
    for(int x = 3; x < 5; x++){
      tyres[x] = new MediumTyre();
    }
    return tyres;
  }
}
