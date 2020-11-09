#ifndef BDWENGINE_H
#define BDWENGINE_H
#include "CarEngine.h"

class BDWEngine:public CarEngine{
public:
  BDWEngine();
  CarEngine* clone();
};

#endif
