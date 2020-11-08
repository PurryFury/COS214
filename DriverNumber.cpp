#include "DriverNumber.h"

    DriverNumber::DriverNumber(string driverNum):Sticker(driverNum){}
    DriverNumber::~DriverNumber(){}

    void DriverNumber::display(){
        cout << "Driver Number: " << detail << endl;
    }
