#ifndef RaceIterator_H
#define RaceIterator_H

#include "Iterator.h"
#include <iostream>


template <class T>
class RaceIterator:public Iterator<T>
{
	
	public:
		//takes in the the amount of 'things' in the vector being passed in

		RaceIterator(int cap,std::vector<T*>* raceList);
		~RaceIterator();
		T* first();
		T* next();
		bool isDone();
		T* current();
	private:
		int curr;//cointain the index of the current T*
		int capacity;//cointains the last index of T*
		std::vector<T*>* List;
};
#endif
	