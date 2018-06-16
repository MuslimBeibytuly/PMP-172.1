#pragma once
#include "IDrawable.h"
class Food
	: public IDrawable
{
public:
	Coordinate body;
	Food();
	~Food(); 
	void reinit();
	void draw() override;
};

