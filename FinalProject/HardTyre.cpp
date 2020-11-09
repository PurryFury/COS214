#include "HardTyre.h"

HardTyre::HardTyre():Tyres(100.0f,100.0f,60.0f){}

Tyres* HardTyre::clone(){
	Tyres* temp = new HardTyre();
	return temp;
}