#include "Test.h"

Test::Test(){
	count = 400;
	tyre = new Tyres*[6];
	tyre[0] = new SoftTyre();
	tyre[1] = tyre[0]->clone();
	tyre[2] = new MediumTyre();
	tyre[3] = tyre[2]->clone();
	tyre[4] = new HardTyre();
	tyre[5] = tyre[4]->clone();
}

Test::~Test(){
	for(int i = 0; i < 6; i++)
		delete tyre[i];
	delete []tyre;
}

bool Test::checkWindTunnel(int x){
	int y = 0, z = 0;
	bool flagz = true;
	
	for(int i = 0; i < x; i++){
		flagz = true;
		if(count == 0){
			if(y != 0)
				cout<<"\nPASSES: "<<y<<", FAILS: "<<z<<"\n"<<endl;
			cout<<"\n***ALL TOKENS USED***\n"<<endl;
			return false;
		}
		int res = 1 + (rand()%40);
		if(res == 13 || res == 20){
			cout<<"TEST:"<<i<<" CAR PREFORMANCE BELOW OPTIMAL IN WIND TUNNEL"<<endl;
			z++;
			flagz = false;
		}else
		
		tyre[1]->addDurability(-4.0f);
		tyre[3]->addDurability(-5.0f);
		tyre[5]->addDurability(-4.0f);
		
		if(tyre[1]->getDurability() < 0.0f){
			delete tyre[1];
			tyre[1] = tyre[0]->clone();
			cout<<"TEST:"<<i<<" SOFT TYRE FAILED IN WIND TUNNEL"<<endl;
			if(flagz)
				z++;
			flagz = false;
		}
		if(tyre[3]->getDurability() < 0.0f){
			delete tyre[3];
			tyre[3] = tyre[2]->clone();
			cout<<"TEST:"<<i<<" MEDIUM TYRE FAILED IN WIND TUNNEL"<<endl;
			if(flagz)
				z++;
			flagz = false;
		}
		if(tyre[5]->getDurability() < 0.0f){
			delete tyre[5];
			tyre[5] = tyre[4]->clone();
			cout<<"TEST:"<<i<<" HARD TYRE FAILED IN WIND TUNNEL"<<endl;
			if(flagz);
				z++;
			flagz = false;
		}
		
		if(flagz)
			y++;
		count--;
	}
		cout<<"\nPASSES: "<<y<<", FAILS: "<<z<<"\n"<<endl;
	return true;
}

int Test::getToken(){
	return count;
}