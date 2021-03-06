#ifndef Engine_H
#define Engine_H
#include "Engineer.h"

using namespace std;

class Engine : public Engineer{
public:
	Engine(string ID) : Engineer(100, "other", ID){};
	Engine(float x, string y, string ID) : Engineer(x,y,ID){};
	virtual bool work(float val);
};
#endif
