#include "FuelCrew.h"

FuelCrew::FuelCrew(Car* c)
{
	next=NULL;
	raceCar=c;
}

FuelCrew::~FuelCrew()
{
}
	
void FuelCrew::setNextCrew(Crew* nextCrew)
{
	next=nextCrew;
}

void FuelCrew::doYourJob(string job)
{
	if( job=="fuel")
	{
		raceCar->resetFuel();
		cout<<"car fuel tank was refilled";
		
	}
	else
	{
		next->doYourJob(job);
		 
	 }
}

void FuelCrew::setCar(Car* c)
{
	raceCar=c;
}