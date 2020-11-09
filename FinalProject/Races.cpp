#include "Races.h"
#include <iostream>

using namespace std;

void Races::describe(){
  prepare();
  travel();
}

int Races::getLaps(){
	return laps;
}

string Races::getName(){
	return name;
}