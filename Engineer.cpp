#include "Engineer.h"

Engineer::Engineer(float hp, string part, string ID){
	this->ID = ID;
	this->hp = hp;
	this->part = part;
}

void Engineer::setHP(float hp){
	this->hp = hp;
}

void Engineer::setPart(string part){
	this->part = part;
}

float Engineer::getHP(){
	return hp;
}

string Engineer::getPart(){
	return part;
}

string Engineer::getID(){
	return ID;
}
