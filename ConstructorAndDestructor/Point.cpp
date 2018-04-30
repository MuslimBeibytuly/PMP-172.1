#include "Point.h"

Point::Point()
{
	x = 0, y = 0, z = 0;
	std::cout << "Point()" << std::endl;
}

Point::Point(int _x, int _y, int _z)
{
	x = _x, y = _y, z = _z;
	std::cout << "Point(int, int, int)" << std::endl;
}

Point::~Point()
{
	std::cout << "~Point()" << std::endl;
}

void Point::show()
{
	std::cout << x << ' ' << y << ' ' << z << std::endl;
}
