#include "TyreSensor.h"

TyreSensor::TyreSensor(Car* c, Engineer* e):Sensors(c, e){
  //make crew somehow
}

void TyreSensor::checkStatus(){
  //same problems as with fuel sensor need to use engineer to get true/false;
  bool needPitstop = engineer->work((car->getTyres())[car->getCurrent()]->getDurability());//change later to donavans implementation somehow
  if(needPitstop){
    //ask user for input
    cout << "YOUR TYRES ARE WORN OUT!!!" << endl << endl;
    cout << "1. Go to pitstop" << endl;
    cout << "2. Keep on driving" << endl;
    int x;
    cin >> x;
    while(true){
      switch(x){
        case 1:
          cout << "You decide to stop for a pitstop, you lose 1 spot but don't die" << endl;
          //TODO: change state of car, to pitstop which will deduct the one placement in the race;
          car->toggleState();
          car->getState()->handle(car);//lose one place in the race;
          crew->doYourJob("tyres");//will call crew to change tyres of the car;
          car->toggleState();//toggle back to race mode pog champ
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
