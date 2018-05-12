#pragma once
#include <vector>
#include "Coordinate.h"
class Snake
{
	char sign;
public:
	std::vector<Coordinate> body;
	enum Direction { Up, Down, Left, Right, Default };
	Direction direction;
	Snake();
	~Snake();
	void draw();
	void move();
	bool eats(const Coordinate &) const;
	bool eatsEatself() const;
	void eat(Coordinate);
};
