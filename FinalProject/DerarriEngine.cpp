#include "DerarriEngine.h"

DerarriEngine::DerarriEngine():CarEngine(375.0f, 10.3f){}

CarEngine* DerarriEngine::clone(){
	CarEngine* temp = new DerarriEngine();
	return temp;
}