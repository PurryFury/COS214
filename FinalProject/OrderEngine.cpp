#include "OrderEngine.h"

 void OrderEngine::orderPart(){
	 int x = 0; 
			cout<<"1. BDW Engine"<<endl;
			cout<<"2. Derarri Engine"<<endl;
			cin>>x;
		
	 if(x == 1){
		 engine = new BDWEngine(); 
	 }else
		 engine = new DerarriEngine();
 }
 