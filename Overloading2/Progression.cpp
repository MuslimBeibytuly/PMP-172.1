#include "Progression.h"

Progression::Progression(const double & a1, const double & d)
{
	this->a1 = a1;
	this->d = d;
}

double Progression::operator[](const int & i) const
{
	return a1 + (d * (i - 1));
}

double Progression::operator()(const int & i) const
{
	return (((2 * a1) + ((i - 1) * d)) * i) / 2;
}


Progression::~Progression()
{
}
