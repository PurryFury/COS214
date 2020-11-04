#include "Engineer.h"

Engineer::Engineer(int hp, string part, string ID){
	this->ID = ID;
	this->hp = hp;
	this->part = part;
}

void Engineer::setHP(int hp){
	this->hp = hp;
}

void Engineer::setPart(string part){
	this->part = part;
}

int Engineer::getHP(){
	return hp;
}

string Engineer::getPart(){
	return part;
}

string Engineer::getID(){
	return ID;
}