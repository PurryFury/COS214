#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H
#include "Engineer.h"

using namespace std;

class Aerodynamics : public Engineer{
public:
	Aerodynamics(string ID) : Engineer(100, "other",ID){};
	Aerodynamics(float x, string y, string ID): Engineer(x,y,ID){};
	virtual bool work(float val);
};
#endif
