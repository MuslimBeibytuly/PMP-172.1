#pragma once
#include "Coordinate.h"
#include <vector>
class IDrawable
{
public:
	char sign;
	virtual void draw() = 0;
	IDrawable();
	virtual ~IDrawable();
};
