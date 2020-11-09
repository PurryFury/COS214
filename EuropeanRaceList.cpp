#include "EuropeanRaceList.h"

//Constructor initializes vector of size x and type T* (in this case Race*)
template <class T>
EuropeanRaceList<T>::EuropeanRaceList(int x):RaceList<T>()
{
	List=new std::vector<T*>(x);
	capacity=x;
	count=0;
}

//
template <class T>
EuropeanRaceList<T>::~EuropeanRaceList()
{
	if(List!=NULL)
	{
		List->erase(List->begin()+capacity);
	}
}

//appends List
template <class T>
void EuropeanRaceList<T>::AddToList(T* race)
{
	if(count<capacity)
	{
		(*List)[count]=race;
		count++;
	}
}
//create an iterator and returns it (Currently i think the problem lies in the iterator class)
template <class T>
Iterator<T>* EuropeanRaceList<T>::getIterator()
{
	Iterator<T>* it=new RaceIterator<T>(count-1,List );
	return it;
}
