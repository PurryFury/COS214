#ifndef OrderEngine_H
#define OrderEngine_H
#include "CarBuilder.h"
#include <iostream>

using namespace std;

class OrderEngine : public CarBuilder{
public:
	OrderEngine(){};
	virtual void orderPart();
};
#endif