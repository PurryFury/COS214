#include "RaceIterator.h"

template <class T>
RaceIterator<T>::RaceIterator(int cap,std::vector<T*>* RaceList)
{	
	capacity=cap;
	curr=0;
	List=RaceList;
}

template <class T>
RaceIterator<T>::~RaceIterator()
{
	if(List!=NULL)//there is a list todelete
	{
		List->erase(List->begin()+capacity);
	}
}
//returns the first element in the vector NOTE: vector contains elements type T*
template <class T>	
T* RaceIterator<T>::first()
{
	return (*List)[0];
}

//checks if theres is a next the returns next ans increases the count on current
template <class T>
T* RaceIterator<T>::next()
{
	
	if(this->isDone())
	{
		std::cout<<"Theres is no more races for this location\n";
		return NULL;
	}
	else
	{
		curr++;
		return (*List)[curr];
	}
}
//IF current =capacity return true
//check implementation in EuropeanRaceList we pass in the counter as the upper bound not the capacity
template <class T>
bool RaceIterator<T>::isDone()
{
	if(curr==capacity)
	{
		std::cout<<"all races are done\n";
		return true;
	}
	else
	{
		int left=capacity-curr;
		std::cout<<"there are still "<<left<<" races left for this location\n";
		return false;
	}
}

//returns the current Race*
template <class T>	
T* RaceIterator<T>::current()
{
	return (*List)[curr];
}






