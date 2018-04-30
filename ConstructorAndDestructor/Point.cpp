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

void Point::writePointToFile()
{
	std::ofstream out("point.txt");
	out << x << ' ' << y << ' ' << z << std::endl;
	out.close();
}

void Point::readPointFromFile()
{
	std::ifstream in("point.txt");
	if (in.is_open()) 
	{
		in >> x >> y >> z;
	}
	in.close();
}
