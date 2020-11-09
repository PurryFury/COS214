#ifndef NonEuropeanRaceList_H
#define NonEuropeanRaceList_H

#include "RaceIterator.h"
#include "RaceList.h"



template<class T>
class NonEuropeanRaceList:public RaceList<T>
{
	public:
		NonEuropeanRaceList(int x);
		~NonEuropeanRaceList();
		void AddToList(T* race);
		Iterator<T>* getIterator();
	private:
		std::vector<T*> *List;
		int count;
		int capacity;

};
#endif