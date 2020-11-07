#ifndef RACER_H
#define RACER_H

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

using namespace std;
class Racer{
	private:
		string name;
		Car* car;
		CarBuilder* constructor;
		Sticker* mention;
		Engine* engine;
	public:
		Racer();
		~Racer();
		void construct();

		void setCar(Car* v);
		Car* getCar();

		void addDriverNumber(string s);
		void addSticker(Sticker* s);

		void displayStickers();

};
#endif
