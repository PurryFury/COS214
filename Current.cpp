#include "Current.h"

Engineer* Current::hireEngineer(string type, string ID){
	Engineer* temp;
	if(type == "Aerodynamics")
		temp = new Aerodynamics(ID);
	else if(type == "Engine")
		temp = new Engine(ID);
	else if(type == "Electronics")
		temp = new Electronics(ID);
	else
		temp = new Chasis(ID);
	return temp;
}