//NOT THE ACTUAL RACE CLASS
//Just to test my code
#ifndef RaceList_H
#define RaceList_H
#include<iostream>


#include "Iterator.h"
#include <vector>

template<class T>
class RaceList
{
	public:
		RaceList();
		~RaceList(){};
		virtual void AddToList(T* race)=0;
		virtual Iterator<T>* getIterator()=0;
	
};
#endif