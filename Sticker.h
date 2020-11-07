#if !defined(Sticker_H)
#define Sticker_H

#include <string>
#include <iostream>

using namespace std;

class Sticker
{
protected:
    string detail;
public:
    Sticker(string details);
    virtual ~Sticker();

    virtual void display()=0;
    virtual void add(Sticker*)=0;
};


#endif // Sticker_H
