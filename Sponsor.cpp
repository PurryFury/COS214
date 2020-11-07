#include "Sponsor.h"

    Sponsor::Sponsor(string sponsorName):Sticker(sponsorName){}
    Sponsor::~Sponsor(){

    }

    void Sponsor::display(){
        if(next==0){

        }
        else{
            next->display();
        }
            cout << detail << endl;
    }
    void Sponsor::add(Sticker* in){
        if(next==0){
            next = in;
        }
        else{
            next->add(in);
        }
    }