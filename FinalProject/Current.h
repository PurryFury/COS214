#ifndef Current_H
#define Current_H
#include "Season.h"

using namespace std;

class Current : public Season{
public:
	Current(){};
	virtual Engineer* hireEngineer(string type, string ID);
};
#endif