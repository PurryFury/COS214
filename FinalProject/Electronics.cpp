#include "Electronics.h"

bool Electronics::work(float val){
	float x = 0.0f;
	if(part == "tyre"){
		x = hp*30/100;
		if(val < x)
			return true;
	}else{
		x = hp*52/100;
		if(val < x)
			return true;
	}
	return false;
}
