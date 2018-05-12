#include "SimpleArray.h"



SimpleArray::SimpleArray(size_t size)
{
	this->size = size;
	a = new int[size];
}

SimpleArray::SimpleArray(const SimpleArray & other)
{
	this->size = other.size;
	a = new int[size];
	for (int i = 0; i < size; ++i) 
	{
		a[i] = other.a[i];
	}
}

SimpleArray::~SimpleArray()
{
	delete[] a;
}
