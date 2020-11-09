#ifndef CARENGINE_H
#define CARENGINE_H

class CarEngine{
protected:
  float speed;//maximum speed, will be nerfed based on tyre choice
  float fuelConsumption;//this is fuel consumed per lap
  CarEngine(float s, float fuel);
public:
  float getSpeed();
  float getFuelConsumption();
};

#endif
