#if !defined(Crew_H)
#define Crew_H

#include <string>
#include <iostream>
#include "Car.h"
#include "Tyres.h"

using namespace std;

class Crew
{
public:
	Crew();
	virtual ~Crew();

	virtual void setNextCrew(Crew* nextCrew)=0;
	virtual void doYourJob(string)=0;
};


#endif 