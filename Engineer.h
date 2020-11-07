#ifndef ENGINEER_H
#define ENGINEER_H
#include <string>

using namespace std;

class Engineer{
protected:
	float hp;
	string ID;
	string part;
public:
	Engineer(float hp, string part, string ID);
	void setHP(float val);
	void setPart(string part);
	float getHP();
	string getPart();
	string getID();
	virtual bool work(float val) = 0;
};
#endif
