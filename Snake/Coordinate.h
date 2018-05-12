#pragma once
#include <windows.h>
#include <conio.h>
#include <iostream>
class Coordinate
{
public:
	short x, y;
	Coordinate();
	Coordinate(short, short);
	~Coordinate();
	void draw(char);
	short getX() const;
	void setX(short);
	short getY() const;
	void setY(short);
	bool operator ==(const Coordinate &) const;
};

