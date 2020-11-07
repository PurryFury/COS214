#include "Engine.h"

bool Engine::work(int val){
	int x = 0;
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