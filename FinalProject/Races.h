#ifndef RACES_H
#define RACES_H
#include <string>

using namespace std;

class Races{
protected:
  int laps;
  string name;
public:
  Races(int x,string y){laps = x;name = y;};
  void describe();
  virtual void prepare() = 0;
  virtual void travel() = 0;
  int getLaps();
  string getName();
};

#endif
