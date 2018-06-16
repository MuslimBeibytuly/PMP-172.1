#include "IDrawableVector.h"



void IDrawableVector::draw()
{
	for (Coordinate & point : body)
	{
		point.draw(sign);
	}
}

IDrawableVector::IDrawableVector()
{
}


IDrawableVector::~IDrawableVector()
{
}
