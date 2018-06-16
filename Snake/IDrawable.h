#pragma once
#include "Coordinate.h"
#include <vector>
class IDrawable
{
public:
	char sign;
	std::vector<Coordinate> body;
	void draw();
	IDrawable();
	virtual ~IDrawable();
};
