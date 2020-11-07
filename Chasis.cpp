#include "Chasis.h"

bool Chasis::work(int val){
	int x = 0;
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