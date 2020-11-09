#include "SoftTyre.h"

SoftTyre::SoftTyre():Tyres(80.0f,50.0f,100.0f){}

Tyres* SoftTyre::clone(){
	Tyres* temp = new SoftTyre();
	return temp;
}