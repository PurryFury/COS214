#if !defined(DriverNumber_H)
#define DriverNumber_H

#include "Sticker.h"

class DriverNumber : public Sticker
{
public:
    DriverNumber(string driverNum);
    ~DriverNumber();

    virtual void display();
};

#endif // DriverNumber_H
