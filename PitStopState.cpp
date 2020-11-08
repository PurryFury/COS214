#include "PitStopState.h"

void PitStopState::handle(Car* car){
  if(car->position < 10)
    car->position++;
}
