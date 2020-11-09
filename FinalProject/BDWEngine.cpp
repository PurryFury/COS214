#include "BDWEngine.h"

BDWEngine::BDWEngine():CarEngine(400.0f, 12.5f){}


CarEngine* BDWEngine::clone(){
	CarEngine* temp = new BDWEngine();
	return temp;
}