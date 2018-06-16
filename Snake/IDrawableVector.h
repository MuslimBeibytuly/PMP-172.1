#pragma once
#include "IDrawable.h"
class IDrawableVector
	: public IDrawable
{
public:
	std::vector<Coordinate> body;
	void draw() override;
	IDrawableVector();
	virtual ~IDrawableVector();
};

