#include "Coordinate.h"



Coordinate::Coordinate()
{
}

Coordinate::Coordinate(short x, short y)
{
	this->x = x;
	this->y = y;
}


Coordinate::~Coordinate()
{
}

void Coordinate::draw(char symbol)
{
	COORD coordinate = { x, y };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, coordinate);
	std::cout << symbol;
}

short Coordinate::getX() const
{
	return x;
}

void Coordinate::setX(short x)
{
	this->x = x;
}

short Coordinate::getY() const
{
	return y;
}

void Coordinate::setY(short)
{
	this->y = y;
}
