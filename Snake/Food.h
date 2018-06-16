#pragma once
#include "IDrawable.h"
class Food
	: public IDrawable
{
public:
	Food();
	~Food(); 
	void reinit();
};

