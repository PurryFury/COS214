#ifndef Next_H
#define Next_H
#include "Season.h"

using namespace std;

class Next : public Season{
public:
	Next(){};
	virtual Engineer* hireEngineer(string type, string ID);
};
#endif