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
		 int X= raceCar->getCurrent();

		 Tyres** tyres=raceCar->getTyres();
		 float max=tyres[X]->getDurability();
		 //replace it with the set of tyres with the highest durability
		 int Y=X;
		 for(int i=0;i<5;i++)
		 {
			 if(max<tyres[i]->getDurability())
			 {
				 Y=i;
			 }
		 }
		 if(Y==X)
		 {
			 cout<<"there are no better tyres to replace with"<<endl;
		 }
		 else
		 {
			raceCar->setCurrent(Y);
			cout<<"tyres have been replaced by wheel crew"<<endl;
		 }
	 }
	 else if(next!=NULL)
	 {
		 cout<<"nothing for crew to do";
	 }
 }
void WheelCrew::setCar(Car* c)
{
	raceCar=c;
}
