#ifndef Team_H
#define Team_H
#include <string>
#include <iostream>
#include <vector>
#include "Season.h"
#include "Current.h"
#include "Next.h"
#include "Aerodynamics.h"
#include "Chasis.h"
#include "Electronics.h"
#include "Engine.h"
#include "Engineer.h"
#include "Sensors.h" 
#include "Racer.h"
#include "Sponsor.h"
#include "DriverNumber.h"
#include "Sensors.h"
#include "TyreSensor.h"
#include "FuelSensor.h"

using namespace std;

class Team{
private:
	vector<Engineer*> engineers;
	Season* season;
	Racer* racer;
	string name;
	string seasonS;
	int sensorT[2];
	int engineerS[4];
	void displayEngineers(int y);
	void createRacer();
	Engineer* getEngineer(string A);
public:
	Team();
	~Team();
	void run();
	void hireEngineers();
	void addSensors();
	
};
#endif