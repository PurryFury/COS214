#include <iostream>
//builder classes
#include "CarBuilder.h"
#include "OrderEngine.h"
#include "OrderTyres.h"
//car classes
#include "Car.h"
#include "Tyres.h"
#include "Engine.h"
//sticker classes
#include "Sticker.h"
#include "DriverNumber.h"
#include "Sponsor.h"


#ifndef RACER_H
#define RACER_H
using namespace std;
class Racer{
	private:
		Car* vehicle1;
		//Car* vehicle2;
		CarBuilder* constructor;
		Engine* engine;
		Tyres** tyres;
		Sticker* mention
	public:
		Racer();
		~Racer();
		void construct();
	
		void setVehicle1(Car* v);
		//void setVehicle2(Car* v);
		Car* getVehicle1();
		//Car* getVehicle2();
		
		void addDriverNumber(string s);
		void addSticker(Sticker* s);
		
};
#endif