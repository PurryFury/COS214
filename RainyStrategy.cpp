#include "RainyStrategy.h"
#include "MediumTyre.h"
#include "SoftTyre.h"

RainyStrategy::RainyStrategy(){
  tyres = NULL;
}

Tyres** RainyStrategy::getTyres(){
  if(tyres != NULL){
    return tyres;
  }else{
    //make 2 medium 3 soft
    tyres = new Tyres*[5];//only 5 tyres allowed
    for(int i = 0; i < 3; i++){
      tyres[i] = new SoftTyre();
    }
    for(int x = 3; x < 5; x++){
      tyres[x] = new MediumTyre();
    }
    return tyres;
  }
}
