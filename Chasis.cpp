#include "Chasis.h"

bool Chasis::work(float val){
	float x = 0.0f;
	if(part == "tyre"){
		x = hp*35/100;
		if(val < x)
			return true;
	}else{
		x = hp*55/100;
		if(val < x)
			return true;
	}
	return false;
}
