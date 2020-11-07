#ifndef CARBUILDER_H
#define CARBUILDER_H
#include "CarEngine.h"
#include "BDWEngine.h"
#include "DerarriEngine.h"
#include "Tyres.h"
#include "RacingTyres.h"

using namespace std;

class CarBuilder {
protected:
	RacingTyres* strat;
	CarEngine* engine;
public:
	CarBuilder(){};
	~CarBuilder(){delete strat;};
	virtual void orderPart() = 0;
	CarEngine* getEngine();
	Tyres** getTyres();
};
#endif