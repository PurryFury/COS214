#ifndef WheelCrew_H
#define WheelCrew_H

#include "Crew.h"

class WheelCrew: public Crew
{
private:
	Crew* next; 
	Car* raceCar;
public:
	WheelCrew(Car*);
	~WheelCrew();
	void setNextCrew(Crew* nextCrew);
	void doYourJob(string);
	void setCar(Car* c);
};
#endif 

