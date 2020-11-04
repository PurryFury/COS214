#ifndef RACINGTYRES_H
#define RACINGTYRES_H
//turn somehow into Context of the race
#include "RacingStrategy.h"

class RacingTyres{
private:
  RacingStrategy* strat;
public:
  RacingTyres();//asks for int to be input and creates appropriate strategy
  Tyres** getTyres();//will call strategy's function
  /*
  need to make some variable get the strategy
  have three tyre strats
  1. Risky
  2. Default
  3. Rainy
  these will populate different set of tyres based on selection
  and getTyres() ----- if pointer is null construct a set otherwise return a switch may be done i assume???
  */
};

#endif
