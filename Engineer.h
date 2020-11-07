#ifndef ENGINEER_H
#define ENGINEER_H
#include <string>

using namespace std;

class Engineer{
protected:
	int hp;
	string ID;
	string part;
public:
	Engineer(int hp, string part, string ID);
	void setHP(int val);
	void setPart(string part);
	int getHP();
	string getPart();
	string getID();
	virtual bool work(int val) = 0;
};
#endif