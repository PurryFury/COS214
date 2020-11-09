#ifndef TEST_H
#define TEST_H
#include "Tyres.h"
#include "SoftTyre.h"
#include "MediumTyre.h"
#include "HardTyre.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Test{
private:
	Tyres** tyre;
	int count;
public:
	Test();
	~Test();
	bool checkWindTunnel(int x);
	int getToken();
};
#endif