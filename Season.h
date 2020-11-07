#ifndef Season_H
#define Season_H
#include "Engineer.h"
#include "Aerodynamics.h"
#include "Chasis.h"
#include "Electronics.h"
#include "Engine.h"
#include <string>

using namespace std;

class Season{
public:
	Season(){};
	virtual Engineer* hireEngineer(string type, string ID) = 0;
};
#endif