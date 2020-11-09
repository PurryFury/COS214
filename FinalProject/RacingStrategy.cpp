#include "RacingStrategy.h"

RacingStrategy::~RacingStrategy(){
  if(tyres != NULL){
    for(int i = 0; i < 5; i++)
      delete tyres[i];
    delete tyres;
  }
}
