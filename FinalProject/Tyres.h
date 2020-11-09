#ifndef TYRES_H
#define TYRES_H

class Tyres{
protected:
  float maxSpeed;//this is a speed multiplier in %, if 100.0f store this means the speed of engine x will stay x, otherwise x*maxSpeed/100
  float durability;//durabilty will drop as the race goes on, different tyres have different durability
  float maneuverability;//idk why this is here but will be used in a formula for a ranking change
public:
  Tyres(float max, float dura, float maneuver);
  float getMaxSpeed();
  float getDurability();
  void addDurability(float f);
  float getManeuverability();
  virtual Tyres* clone() = 0;
};

#endif
