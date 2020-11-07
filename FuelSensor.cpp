#include "FuelSensor.h"

FuelSensor::FuelSensor(Car* c, Engineer* e):Sensors(c, e){
  //make crew somehow
}

void FuelSensor::checkStatus(){
  //how to check status on fuel ???
  //can use donavans strat of uing engineers and template in Sensors probably???
  //Engineers will check and output true/false if pitstop needed
  //if true show the message and depending on choice of user change state or don't
  bool needPitstop = true;//change later to donavans implementation somehow
  if(needPitstop){
    //ask user for input
    cout << "YOU ARE LOW ON FUEL!!!" << endl << endl;
    cout << "1. Go to pitstop" << endl;
    cout << "2. Keep on driving" << endl;
    int x;
    cin >> x;
    while(true){
      switch(x){
        case 1:
          cout << "You decide to stop for a pitstop, you lose 1 spot but don't die" << endl;
          if(car->position < 10)
            car->position++;
          //TODO: change state of car, to pitstop which will deduct the one placement in the race;
          crew->doYourJob("fuel");//will call crew to refuel the car;
          break;
        case 2:
          cout << "You have decided to go for one more lap, no ranking has been lost" << endl;
          //just continue with the loop;
          break;
        default:
          cout << " Incorrect input" << endl;
          cin >> x;
          continue;
      }
      break;
    }
  }
  return;//return if don't need pitstop???
}
