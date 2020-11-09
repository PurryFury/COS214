#ifndef Electronics_H
#define Electronics_H
#include "Engineer.h"

using namespace std;

class Electronics : public Engineer{
public:
	Electronics(string ID) : Engineer(100, "other", ID){};
	Electronics(float x, string y, string ID) : Engineer(x,y,ID){};
	virtual bool work(float val);
};
#endif
