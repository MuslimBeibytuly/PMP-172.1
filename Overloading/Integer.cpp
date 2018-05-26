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


std::ostream & operator<<(std::ostream & o, const Integer & i)
{
	o << i.value;
	return o;
}

std::istream & operator >> (std::istream & is, Integer & i)
{
	is >> i.value;
	return is;
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
