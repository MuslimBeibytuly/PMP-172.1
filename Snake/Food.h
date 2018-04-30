#pragma once
#include "Coordinate.h"
class Food
{
	char sign;
public:
	Coordinate body;
	Food();
	~Food(); 
	void reinit();
	void draw();
};

