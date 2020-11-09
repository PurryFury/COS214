#ifndef OrderTyres_H
#define OrderTyres_H
#include "CarBuilder.h"

using namespace std;

class OrderTyres : public CarBuilder{
public:
	OrderTyres(){};
	virtual void orderPart();
};
#endif