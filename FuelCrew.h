#ifndef FuelCrew_H
#define FuelCrew_H

#include "Crew.h"

class FuelCrew: public Crew
{
private:
	Crew* next;
	Car* raceCar;
public:
	FuelCrew(Car* c) ;
	~FuelCrew();
	void setNextCrew(Crew* nextCrew);
	void doYourJob(string);
	void setCar(Car* c);
};
#endif 
















