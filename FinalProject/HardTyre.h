#ifndef HARDTYRE_H
#define HARDTYRE_H
#include "Tyres.h"

class HardTyre:public Tyres{
public:
  HardTyre();
  Tyres* clone();
};

#endif
