#include "Racer.h"
Racer::Racer(){
	vehicle1 = nullptr;
	vehicle2 = nullptr;
	constructor = nullptr;
	mention = nullptr;
	//cout<<"A racer is born"<<endl;
}

Racer::~Racer(){
	if (vehicle1 != nullptr){
		vehicle1->~Car();
		//cout<<"vehicle1 was destroyed"<<endl;
	}
	delete constructor;
	constructor = nullptr;
	delete metion;
	mention = nullptr;
	tyres= nullptr;
	engine=nullptr;
	//~ if(vehicle2 != nullptr){
		//~ vehicle2->~Car();
		//~ cout<<"vehicle2 was destroyed"<<endl;
	//~ }
	
	//cout<<"The racer has been killed"<<endl;
}

void Racer::construct(){
	constructor = nullptr;
	//"build" the engine
	constructor = new OrderEngine();
	constructor->orderPart();
	engine = constructor->getEngine();
	//"build" the tyres
	constructor = nullptr;
	constructor = new OrderTyres();
	constructor->orderPart();
	tyres = constructor->getTyres();
	
	//"build" the car
	vehicle1=new Car(tyres, engine);
	return;
	
}

Car* Racer::getVehicle1(){
	return vehicle1;
}

//~ Car* Racer::getVehicle2(){
	//~ return vehicle2;
//~ }

void Racer::setVehicle1(Car* v){
	vehicle1 = v;
}

//~ void Racer::setVehicle2(Car* v){
	//~ vehicle2 = v;
//~ }

void Racer::addDriverNumber(string s){
	mention = new DriverNumber(s);
	mention->display();
}

void Racer::addSticker(Sticker* s){
	if(mention==nullptr){
		string nr;
		cout<<"You can't add a sticker without a driver number!"<<endl;
		cout<<"Please enter a driver number: ";
		getline(cin, nr);
		addDriverNumber(nr);
	}
	mention->add(s);
	mention->display();
}