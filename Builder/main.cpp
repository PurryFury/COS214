#include "Tyres.cpp"
#include "CarEngine.cpp"
#include "HardTyre.cpp"
#include "OrderEngine.cpp"
#include "OrderTyres.cpp"
#include "OwnStrategy.cpp"
#include "RacingTyres.cpp"
#include "RainyStrategy.cpp"
#include "RiskyStrategy.cpp"
#include "DefaultStrategy.cpp"
#include "CarBuilder.cpp"



#include <iostream>
#include <string>


int main(){
	CarBuilder* builder = new OrderEngine();
	builder->orderPart();
	CarEngine* temp = builder->getEngine(); 
	cout<<temp->getSpeed()<<endl;
	builder = new OrderTyres();
	builder->orderPart();
	Tyres** tyre = builder->getTyres();
	cout<<tyre[4]->getMaxSpeed()<<endl;
	delete temp;
	delete builder;
	return 0;
}
