#include "Racer.h"

Racer::Racer(string _name){
	name = _name;
	car = NULL;
	constructor = NULL;
	mention = NULL;
}

Racer::~Racer(){
	if (car != NULL){
		delete car;
	}

	delete constructor;//only delete here because strat eletes reference to tyres
	delete mention;
}

void Racer::construct(){
	//"build" the engine
	constructor = new OrderEngine();
	constructor->orderPart();
	engine = constructor->getEngine();
	delete constructor;//clean engine constructor;
	//"build" the tyres
	constructor = new OrderTyres();
	constructor->orderPart();

	//"build" the car
	car=new Car(constructor->getTyres(), engine);
}

Car* Racer::getCar(){
	return car;
}

void Racer::setCar(Car* c){
	car = c;
}

void Racer::addDriverNumber(string s){
	if(mention == NULL){
		mention = new DriverNumber(s);
	}else{
		mention->add(new DriverNumber(s));
	}
}

void Racer::addSticker(string s){
	Sticker* stick = new Sponsor(s);
	if(mention != NULL){
		mention->add(stick);
	}else{
		mention = stick;
	}
}

void Racer::displayStickers(){
	cout << "Sponsors of " << name << ":" << endl;
	mention->display();
}
