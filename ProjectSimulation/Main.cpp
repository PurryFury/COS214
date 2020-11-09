#include "Classes.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
		Races* race = NULL;
		RaceList<Races>* raceLE = NULL;
		RaceList<Races>* raceLN = NULL;
		Iterator<Races> *it = NULL;
		Iterator<Races> *it2 = NULL;
		int x;
		int euC = 0;
		int neuC = 0;
		int laps = 0; 
		string name = "";
	while(true){
	//team->run();
		Team team = Team(0);
		int y = 0;
		cout<<"PLEASE ADD RACE:"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Add European Race:"<<endl;
		cout<<"\tCurrent: "<<euC<<endl;
		cout<<"2. Add NonEuropean Race:"<<endl;
		cout<<"\tCurrent: "<<neuC<<endl;
		cout<<"3. Begin Races:"<<endl;
		cin>>x;
		
		if(x == 0)
			break;
		
		switch(x){		
			case 1:
				euC = 0;
				cout<<"HOW MANY EUROPEAN RACES (ENTER INT):"<<endl;
				cin>>y;
				raceLE = new EuropeanRaceList<Races>(y);
				for(int i = 1; i <= y; i++){
					cout<<"\nEnter Name of European Race "<<i<<":"<<endl;
					cin>>name;
					cout<<"Enter Lap Count of European Race "<<i<<":"<<endl;
					cin>>laps;
					race = new EuropeanRace(laps,name);
					raceLE->AddToList(race);
					euC++;
				}
				break;
			case 2:
				neuC = 0;
				cout<<"HOW MANY Non-EUROPEAN RACES (ENTER INT):"<<endl;
				cin>>y;
				raceLN = new NonEuropeanRaceList<Races>(y);
				for(int i = 1; i <= y; i++){
					cout<<"\nEnter Name of Non-European Race "<<i<<":"<<endl;
					cin>>name;
					cout<<"Enter Lap Count of Non-European Race "<<i<<":"<<endl;
					cin>>laps;
					race = new NonEuropeanRace(laps,name);
					raceLN->AddToList(race);
					neuC++;
				}
				break;
			case 3:
				if(neuC == 0 && euC == 0){
					cout<<"\n***MUST ADD RACES***\n"<<endl;
					break;
				}
				if(euC != 0){
					it = raceLE->getIterator();
					cout<<"\n*******************************************"<<endl;
					cout<<" BEGINNING EUROPEAN RACE "<<it->first()->getName()<<" WITH "<<it->first()->getLaps()<<" LAPS"<<endl;
					cout<<"*******************************************"<<endl;
						it->first()->describe();
						team = Team(it->first()->getLaps());
						team.run();
						cout<<"\n*********************"<<endl;
						cout<<" SCORED IN RACE "<<it->first()->getName()<<endl;
						cout<<"    "<<team.getPoints()<<" Points"<<endl;
						cout<<"*********************\n"<<endl;
					for(int i = 1; i < euC; i++){
						cout<<"\n*******************************************"<<endl;
						cout<<" BEGINNING EUROPEAN RACE "<<it->next()->getName()<<" WITH "<<it->current()->getLaps()<<" LAPS"<<endl;
						cout<<"*******************************************"<<endl;
						it->current()->describe();
						team = Team(it->current()->getLaps());
						team.run();
						cout<<"\n*********************"<<endl;
						cout<<" SCORED IN RACE "<<it->current()->getName()<<endl;
						cout<<"    "<<team.getPoints()<<" Points"<<endl;
						cout<<"*********************\n"<<endl;
					}
				}
				if(neuC != 0){
					it2 = raceLN->getIterator();
					cout<<"\n*******************************************"<<endl;
					cout<<" BEGINNING NON-EUROPEAN RACE "<<it2->first()->getName()<<" WITH "<<it2->first()->getLaps()<<" LAPS"<<endl;
					cout<<"*******************************************"<<endl;
					it2->first()->describe();
						team = Team(it2->first()->getLaps());
						team.run();
						cout<<"\n*********************"<<endl;
						cout<<" SCORED IN RACE "<<it2->first()->getName()<<endl;
						cout<<"    "<<team.getPoints()<<" Points"<<endl;
						cout<<"*********************\n"<<endl;
					for(int i = 1; i < neuC; i++){
						cout<<"\n*******************************************"<<endl;
						cout<<" BEGINNING NON-EUROPEAN RACE "<<it2->next()->getName()<<" WITH "<<it2->current()->getLaps()<<" LAPS"<<endl;
						cout<<"*******************************************"<<endl;
						it2->current()->describe();
						team = Team(it2->current()->getLaps());
						team.run();
						cout<<"\n*********************"<<endl;
						cout<<" SCORED IN RACE "<<it2->current()->getName()<<endl;
						cout<<"    "<<team.getPoints()<<" Points"<<endl;
						cout<<"*********************\n"<<endl;
					}
				}
				
				break;
			
		}
	}
//	Iterator<Races> *it = raceLE->getIterator();
	if(it != NULL)
		delete it;
	if(it2 != NULL)
		delete it2;
	if(raceLE != NULL)
		delete raceLE;
	if(raceLN != NULL)
		delete raceLN;
	
//	delete it;
//	delete team;
	return 0;
}
