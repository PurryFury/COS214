#include "Aerodynamics.h"

bool Aerodynamics::work(float val){
	float x = 0.0f;
	if(part == "tyre"){
		x = hp*40/100;
		if(val < x)
			return true;
	}else{
		x = hp*45/100;
		if(val < x)
			return true;
	}
	return false;
}
