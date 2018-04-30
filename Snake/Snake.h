#pragma once
#include <vector>
#include "Coordinate.h"
class Snake
{
	std::vector<Coordinate> body;
	char sign;
public:
	enum Direction { Up, Down, Left, Right, Default };
	Direction direction;
	Snake();
	~Snake();
	void draw();
	void move();
	bool eats(const Coordinate &) const;
	void eat(Coordinate);
};

