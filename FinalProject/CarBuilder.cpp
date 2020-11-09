#include "CarBuilder.h"

CarEngine* CarBuilder::getEngine(){
	return this->engine;
}

Tyres** CarBuilder::getTyres(){
	return strat->getTyres();
}