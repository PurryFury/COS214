#ifndef RACES_H
#define RACES_H

class Races{
public:
  void describe();
  virtual void prepare() = 0;
  virtual void travel() = 0;
};
#endif
