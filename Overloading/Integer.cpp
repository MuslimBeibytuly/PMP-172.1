#include "Integer.h"

Integer::Integer(const int & value)
{
	this->value = value;
}

Integer & Integer::operator++()
{
	++value;
	return (*this);
}

Integer Integer::operator++(int)
{
	Integer old(value);
	++value;
	return old;
}

Integer & Integer::operator&()
{
	return (*this);
}

void Integer::operator=(const int & value)
{
	this->value = value;
}

void Integer::operator=(const Integer & i)
{
	value = i.value;
}

bool Integer::operator==(const Integer & i) const
{
	return value == i.value;
}

Integer::operator int() const
{
	return value;
}

int Integer::getValue() const
{
	return value;
}

Integer::~Integer()
{
}
