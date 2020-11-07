#include "Aerodynamics.h"

bool Aerodynamics::work(int val){
	int x = 0;
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