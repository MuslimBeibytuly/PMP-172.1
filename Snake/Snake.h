#pragma once
#include "IDrawable.h"
class Snake
	: public IDrawable
{
public:
	enum Direction { Up, Down, Left, Right, Default };
	Direction direction;
	Snake();
	~Snake();
	void move();
	bool eats(const Coordinate &) const;
	bool eatsEatself() const;
	void eat(Coordinate);
};
