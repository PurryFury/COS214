#include "Aerodynamics.cpp"
#include "Chasis.cpp"
#include "Current.cpp"
#include "Electronics.cpp"
#include "Engine.cpp"
#include "Engineer.cpp"
#include "Next.cpp"
#include "Team.cpp"
#include "Season.h"
#include "Current.h"
#include "Next.h"
#include "Aerodynamics.h"
#include "Chasis.h"
#include "Electronics.h"
#include "Engine.h"
#include "Engineer.h" 
#include <iostream>
#include <string>


int main(){
	
	Season* season = new Current();
	Engineer* temp;
	temp = season->hireEngineer("Aerodynamics","Aero");
	cout<<temp->getID()<<endl;
	cout<<temp->work(50)<<endl;
	temp->setPart("tyre");
	cout<<temp->getPart()<<endl;
	cout<<"Check Tyre: "<<temp->work(40)<<endl;
	cout<<"Check Tyre: "<<temp->work(39)<<endl;
	temp = season->hireEngineer("Engine","Eng");
	cout<<temp->getID()<<endl;
	cout<<temp->work(60)<<endl;
	temp = season->hireEngineer("Electronics","Ele");
	cout<<temp->getID()<<endl;
	cout<<temp->work(10)<<endl;
	temp = season->hireEngineer("Chasis","cha");
	cout<<temp->getID()<<endl;
	cout<<temp->work(10)<<endl;
	
	delete temp;
	delete season;
	return 0;
}
