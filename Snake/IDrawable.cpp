#include "IDrawable.h"

void IDrawable::draw()
{
	for (Coordinate & point : body)
	{
		point.draw(sign);
	}
}

IDrawable::IDrawable()
{
}

IDrawable::~IDrawable()
{
}
