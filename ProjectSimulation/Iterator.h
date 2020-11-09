#ifndef Iterator_H
#define Iterator_H
#include <vector>
#include <iostream>
//abstract iterator class
template <class T> 
class Iterator
{
	public:
		Iterator();
		virtual~Iterator();
		virtual T* first()=0;
		virtual T* next()=0;
		virtual bool isDone()=0;
		virtual T* current()=0;
	
};
#endif