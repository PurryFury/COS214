#include "Aerodynamics.cpp"
#include "Chasis.cpp"
#include "Current.cpp"
#include "Electronics.cpp"
#include "Engine.cpp"
#include "Engineer.cpp"
#include "Next.cpp"
#include "Team.cpp"
#include "Season.h"
#include "Current.h"
#include "Next.h"
#include "Aerodynamics.h"
#include "Chasis.h"
#include "Electronics.h"
#include "Engine.h"
#include "Engineer.h" 
#include <iostream>
#include <string>

int main(){
  Racer* racer = new Racer("Egor");

  racer->addSticker("cock");
  racer->addSticker("lil");
  racer->addSticker("lil");
  racer->addSticker("lil");
  racer->addSticker("lil");
  racer->addSticker("lil");
  

  racer->addDriverNumber("123");
  racer->displayStickers();
  return 0;
}
