#include "Example.h"

Example::Example()
{
	std::cout << "Example()" << std::endl;
}

Example::Example(const Example & other)
{
	std::cout << "Example(other)" << std::endl;
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

Example::Example(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

int Example::sum(int x)
{
	return this->x + y + z + x;
}

Example::~Example()
{
	std::cout << "~Example()" << std::endl;
}
