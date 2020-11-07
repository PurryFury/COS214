#include "Team.h"

Team::Team(){
	name = "None";
	seasonS = "none";
	season = NULL;
	racer = NULL;
	for(int i = 0; i < 4; i++)
		engineerS[i] = 0;
	for(int i = 0; i < 2; i++)
		sensorT[i] = 0;
}

Team::~Team(){
	for(vector<Engineer*>::iterator it = engineers.begin(); it != engineers.end(); it++){
		delete (*it);
	}
	delete season;
}

void Team::run(){
	int i;
	while(true){
		cout<<"\nPLEASE SELECT OPTION BELOW"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Make Racer"<<endl;
		cout<<"\tRacer: "<<name<<endl;
		cout<<"2. Hire Engineers"<<endl;
		cout<<"\tCurrent Engineers: "<<engineers.size()<<endl;
		cout<<"3. Add Sensors"<<endl;
		cout<<"\tFuel Sensor: "<<sensorT[1]<<", Tyre Sensor: "<<sensorT[0]<<endl;
		cout<<"4. Race"<<endl;
		
		cin >> i;
		
		switch(i){
		case 0:
			return;
		case 1:
			if(racer == NULL)
				createRacer();
			break;
		case 2:
			hireEngineers();
			break;
		case 3:
			addSensors();
			break;
		case 4:
			break;
		default:
			cout << "\n***No such choice***" << endl;
		continue;
		}
	}
}

void Team::hireEngineers(){
	int i;
	if(season == NULL){
		while(true){
			cout<<"\nPLEASE SELECT SEASON:"<<endl;
			cout<<"0. Exit"<<endl;
			cout<<"1. Current"<<endl;
			cout<<"2. Next"<<endl;
			cin >> i;
		
			switch(i){
			case 0:
				return;
			case 1:
				seasonS = "Current";
				season = new Current();
				break;
			case 2:
				seasonS = "Next";
				season = new Next();
				break;
			default:
				cout << "\n***No such choice***" << endl;
			continue;
			}
			if(season != NULL)
				break;
		}
	}
	i = -1;
	Engineer* temp;
	while(true){
		cout<<"\nPLEASE SELECT ENGINEER TO HIRE:"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Aerodynamics"<<endl;
		cout<<"2. Engine"<<endl;
		cout<<"3. Electronics"<<endl;
		cout<<"4. Chasis"<<endl;
		cin >> i;
		
		switch(i){
		case 0:
			return;
		case 1:
			temp = season->hireEngineer("Aerodynamics","A");
			engineerS[0]++;
			cout<<"\n**Aerodynamics Engineer Hired for "<<seasonS<<" Season**"<<endl;
			break;
		case 2:
			temp = season->hireEngineer("Engine","En");
			engineerS[1]++;
			cout<<"\n**Engine Engineer Hired for "<<seasonS<<" Season**"<<endl;
			break;
		case 3:
			temp = season->hireEngineer("Electronics","El");
			engineerS[2]++;
			cout<<"\n**Electronics Engineer Hired for "<<seasonS<<" Season**"<<endl;
			break;
		case 4:
			temp = season->hireEngineer("Chasis","C");
			engineerS[3]++;
			cout<<"\n**Chasis Engineer Hired for "<<seasonS<<" Season**"<<endl;
			break;
		default:
			cout << "\n***No such choice***" << endl;
		continue;
		}
		engineers.push_back(temp);
	}
}

void Team::addSensors(){
	int i;
	int x = 0;	
		while(true){
			cout<<"\nPLEASE SELECT SENSOR:"<<endl;
			cout<<"0. Exit"<<endl;
			cout<<"1. Tyre Sensor"<<endl;
			cout<<"2. Fuel Sensor"<<endl;
			cin >> i;
		
			switch(i){
			case 0:
				return;
			case 1:
				displayEngineers(0);
				break;
			case 2:
				displayEngineers(1);
				break;
			default:
				cout << "\n***No such choice***" << endl;
			continue;
			} 
		}
}

Engineer* Team::getEngineer(string A){
	for(vector<Engineer*>::iterator it = engineers.begin(); it != engineers.end(); it++){
		if((*it)->getID() == A)
			return (*it);
	}
	return NULL;
}

void Team::displayEngineers(int y){
	int x;
	Sensors* temp;
	if(racer != NULL){
		while(true){
		cout<<"\nPLEASE SELECT ENGINEER TO ASSIGN"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Aerodynamics Engineer"<<endl;
		cout<<"\tCurrently: "<<engineerS[0]<<" hired"<<endl;
		cout<<"2. Engine Engineer"<<endl;
		cout<<"\tCurrently: "<<engineerS[1]<<" hired"<<endl;
		cout<<"3. Electronics Engineer"<<endl;
		cout<<"\tCurrently: "<<engineerS[2]<<" hired"<<endl;
		cout<<"4. Chasis Engineer"<<endl;
		cout<<"\tCurrently: "<<engineerS[3]<<" hired"<<endl;
		cin>>x;
		if(x == 0)
			return;
		switch(x){						
			case 1:
				if(engineerS[0] > 0){
					if(y == 0)
						temp = new TyreSensor(racer->getCar(),getEngineer("A"));
					else
						temp = new FuelSensor(racer->getCar(),getEngineer("A"));
					racer->getCar()->attachSensor(temp);
					engineerS[0]--;
					sensorT[y]++;
				}
			break;
		case 2:
				if(engineerS[1] > 0){
					if(y == 0)
						temp = new TyreSensor(racer->getCar(),getEngineer("En"));
					else
						temp = new FuelSensor(racer->getCar(),getEngineer("En"));
					racer->getCar()->attachSensor(temp);
					engineerS[1]--;
					sensorT[y]++;
				}
			break;
		case 3:
				if(engineerS[2] > 0){
					if(y == 0)
						temp = new TyreSensor(racer->getCar(),getEngineer("El"));
					else
						temp = new FuelSensor(racer->getCar(),getEngineer("El"));
					racer->getCar()->attachSensor(temp);
					engineerS[2]--;
					sensorT[y]++;
				}
			break;
		case 4:
				if(engineerS[3] > 0){
					if(y == 0)
						temp = new TyreSensor(racer->getCar(),getEngineer("C"));
					else
						temp = new FuelSensor(racer->getCar(),getEngineer("C"));
					racer->getCar()->attachSensor(temp);
					engineerS[3]--;
					sensorT[y]++;
				}
			break;
		default:
			cout << "\n***No such choice***" << endl;
		continue;
		} 
		}
	}
}

void Team::createRacer(){
	string spon = "";
	
	cout<<"\nENTER DRIVER NAME:"<<endl;
	cin >> name; 
	racer = new Racer("JAMES");
	
	while(true){
		cout<<"\nENTER THE SPONSORS FOR RACER AS A STRING"<<endl;
		cout<<"**ENTER 0 TO EXIT**"<<endl;
		 cin >> spon;
		if(spon ==  "0")
			break;
		racer->addSticker(spon);
	}
	cout<<"\nENTER THE DRIVER NUMBER:"<<endl;
	cin>>spon; 
	racer->addDriverNumber(spon);
	cout<<endl;
	racer->construct();
	cout<<endl;
	racer->displayStickers();
}

