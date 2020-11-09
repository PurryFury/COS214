#include "Team.h"

Team::Team(int x){
	points = 0;
	lap = x;
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
			Race();
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

void Team::Race(){
	if(racer == NULL){
		cout<<"\n**Need Racer First**"<<endl;
		return;
	}else if(engineers.size() == 0){
		cout<<"\n**Need Engineers**"<<endl;
		return;
	}else if(sensorT[0] == 0 && sensorT[1] == 0){
		cout<<"\n**Add a Sensor**"<<endl;
		return;
	}
	float tyreS = (racer->getCar()->getTyres())[racer->getCar()->getCurrent()]->getMaxSpeed()/100;
	float tyreM = (racer->getCar()->getTyres())[racer->getCar()->getCurrent()]->getManeuverability()/100;
	float engineS = racer->getCar()->getEngine()->getSpeed();
	engineS = engineS * tyreS;
	
	if(engineS == 400.0f)
		racer->getCar()->position = 1;
	else if(engineS < 400.0f && engineS > 340.0f)
		racer->getCar()->position = 3;
	else
		racer->getCar()->position = 6;
	
	engineS = engineS*tyreM;
	for(int i = 1; i <= lap; i++){
		calcPosition(engineS);
		cout<<"\n*********************"<<endl;
		cout<<"**     LAP "<<i<<"       **"<<endl;
		cout<<"**CURRENT POSITION:**"<<endl;
		cout<<"**       "<<racer->getCar()->position<<"         **"<<endl;
		cout<<"*********************\n"<<endl;
		racer->getCar()->lapPassed();
	}
		cout<<"\n*********************"<<endl;
		cout<<"**    LAST LAP     **"<<endl;
		cout<<"**CURRENT POSITION:**"<<endl;
		cout<<"**       "<<racer->getCar()->position<<"       **"<<endl;
		cout<<"*********************\n"<<endl;
	
	switch(racer->getCar()->position){
		case 1:
			points = 25;
			break;
		case 2:
			points = 18;
			break;
		case 3:
			points = 15;
			break;
		case 4:
			points = 12;
			break;
		case 5:
			points = 10;
			break;
		case 6:
			points = 8;
			break;
		case 7:
			points = 6;
			break;
		case 8:
			points = 4;
			break;
		case 9:
			points = 2;
			break;
		case 10:
			points = 1;
			break;
	}
	
}

int Team::getPoints(){
	return points;
}

void Team::calcPosition(float x){
//	srand((unsigned) time(0));
	int res = 1 + (rand()%4);
	switch(res){
		case 1:
			if(x >= 240.0f){
				if(racer->getCar()->position > 1)
					racer->getCar()->position--;
			}
			break;
		case 2:
			if(x <= 280.0f){
				if(racer->getCar()->position < 10)
					racer->getCar()->position++;
			}
			break;
		case 3:
			if(x > 200.0f){
				if(racer->getCar()->position > 1)
					racer->getCar()->position--;
			}
			break;
		case 4:
			if(x <= 240.0f){
				if(racer->getCar()->position < 10)
					racer->getCar()->position++;
			}
			break;
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

