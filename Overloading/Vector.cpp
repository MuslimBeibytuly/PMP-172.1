#include "Vector.h"



void Vector::push_back(const int & value)
{
	++size;
	if (data == nullptr)
	{
		data = new int[size];
	}
	else
	{
		data = (int*)realloc(data, size * sizeof(int));
	}
	data[size - 1] = value;
}

void Vector::operator+=(const int & value)
{
	push_back(value);
}

void Vector::operator+=(const Vector & v)
{
	for (size_t i = 0; i < v.count(); ++i) 
	{
		push_back(v[i]);
	}
}

Vector & Vector::operator+(const int & value)
{
	Vector res;
	for (int i = 0; i < size; ++i)
	{
		res.push_back(data[i]);
	}
	res.push_back(value);
	return res;
}

bool Vector::operator==(const Vector & v) const
{
	bool isEqual = true;
	if (size != v.size) 
	{
		isEqual = false;
	}
	else 
	{
		for (int i = 0; i < size; ++i) 
		{
			if (data[i] != v[i])
			{
				isEqual = false;
			}
		}
	}
	return isEqual;
}

bool Vector::operator<(const Vector & v) const
{
	return size < v.size;
}

const int & Vector::operator[](size_t position) const
{
	return data[position];
}

size_t Vector::count() const
{
	return size;
}

Vector::Vector()
{
	data = nullptr;
	size = 0;
}


Vector::~Vector()
{
	delete[] data;
}
