#include "DefaultStrategy.h"
#include "HardTyre.h"
#include "MediumTyre.h"
#include "SoftTyre.h"

DefaultStrategy::DefaultStrategy(){
  tyres = NULL;
}

Tyres** DefaultStrategy::getTyres(){
  if(tyres != NULL){
    return tyres;
  }else{
    //make 1 hard 2 medium 2 soft
    tyres = new Tyres*[5];//only 5 tyres allowed
    for(int i = 0; i < 2; i++){
      tyres[i] = new SoftTyre();
    }
    for(int x = 2; x < 4; x++){
      tyres[x] = new MediumTyre();
    }
    tyres[4] = new HardTyre();
    return tyres;
  }
}
