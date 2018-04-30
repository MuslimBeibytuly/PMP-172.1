#include "Point.h"

Point::Point()
{
	x = 0, y = 0, z = 0;
	std::cout << "Point()" << std::endl;
}

Point::Point(int x, int y, int z)
{
	this->x = x, this->y = y, this->z = z;
	std::cout << "Point(int, int, int)" << std::endl;
}

Point::~Point()
{
	std::cout << "~Point()" << std::endl;
}

void Point::show() const
{
	std::cout << x << ' ' << y << ' ' << z << std::endl;
}

void Point::writePointToFile() const
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

Point & Point::getInstance()
{
	static Point instance;
	return instance;
}

void Point::setX(const int & x)
{
	this->x = x;
}
