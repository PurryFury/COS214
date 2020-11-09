#include "WheelCrew.h"

WheelCrew::WheelCrew(Car* c)
{
	next=NULL;
	raceCar=c;
}

WheelCrew::~WheelCrew()
{
	}
void WheelCrew::setNextCrew(Crew* nextCrew)
{
	this->next=nextCrew;
}

void WheelCrew::doYourJob(string job)
{

	 if( job=="tyres")
	 {
		 //Get the current idex of tyres
		 cout << "CURRENT SET OF TYRES" << endl;
		 cout << "Speed: " << raceCar->getTyres()[raceCar->getCurrent()]->getMaxSpeed() << "; Durability: " << raceCar->getTyres()[raceCar->getCurrent()]->getDurability() << "; Maneuverability: " << raceCar->getTyres()[raceCar->getCurrent()]->getManeuverability() << endl;

		 cout << endl << "Tyres in the storage:" << endl;

		 for(int i = 1; i < 6; i++){
			 cout << i << ". " << "Speed: " << raceCar->getTyres()[i-1]->getMaxSpeed() << "; Durability: " << raceCar->getTyres()[i-1]->getDurability() << "; Maneuverability: " << raceCar->getTyres()[i-1]->getManeuverability() << endl;
		 }

		 int x;

		 cin >> x;
		 x--;

		 while(x > 4){
			 cout << "Wrong input !!!" << endl;
			 cin >> x;
			 continue;
		 }

		 raceCar->setCurrent(x);
 		}
}
void WheelCrew::setCar(Car* c)
{
	raceCar=c;
}
