#include "Engine.h"

bool Engine::work(float val){
	float x = 0.0f;
	if(part == "tyre"){
		x = hp*25/100;
		if(val < x)
			return true;
	}else{
		x = hp*50/100;
		if(val < x)
			return true;
	}
	return false;
}
