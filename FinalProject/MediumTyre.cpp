#include "MediumTyre.h"

MediumTyre::MediumTyre():Tyres(90.0f,75.0f,80.0f){}


Tyres* MediumTyre::clone(){
	Tyres* temp = new MediumTyre();
	return temp;
}