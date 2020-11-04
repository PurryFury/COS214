#include "Electronics.h"

bool Electronics::work(int val){
	int x = 0;
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