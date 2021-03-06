#ifndef Chasis_H
#define Chasis_H
#include "Engineer.h"

using namespace std;

class Chasis : public Engineer{
public:
	Chasis(string ID) : Engineer(100, "other", ID){};
	Chasis(float x, string y, string ID) : Engineer(x,y,ID){};
	virtual bool work(float val);
};
#endif
