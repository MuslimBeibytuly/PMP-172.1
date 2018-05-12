#include "SimpleArray.h"



SimpleArray::SimpleArray(size_t size)
{
	this->size = size;
	a = new int[size];
}

SimpleArray::SimpleArray(const SimpleArray & s)
{
	this->size = s.size;
	a = new int[size];
	for (int i = 0; i < size; ++i) 
	{
		a[i] = s.a[i];
	}
}

SimpleArray::SimpleArray()
{
}


SimpleArray::~SimpleArray()
{
	delete[] a;
}
