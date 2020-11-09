#ifndef EuropeanRaceList_H
#define EuropeanRaceList_H

#include "RaceIterator.h"
#include "RaceList.h"



template<class T>
class EuropeanRaceList:public RaceList<T>
{
	public:
		EuropeanRaceList(int x);
		~EuropeanRaceList();
		void AddToList(T* race);
		Iterator<T>* getIterator();
	private:
		std::vector<T*> *List;
		int count;
		int capacity;

};
#endif