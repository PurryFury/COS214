#if !defined(Sponsor_H)
#define Sponsor_H

#include "Sticker.h"

class Sponsor: public Sticker
{
private:
    Sticker* next; 
public:
    Sponsor(string sponsorName);
    ~Sponsor();

    virtual void display();
    virtual void add(Sticker* in);
};

#endif // Sponsor_H
