#include "Snake.h"



Snake::Snake()
{
	direction = Default;
	sign = '*';
	body.push_back(Coordinate(5, 5));
}


Snake::~Snake()
{
}

void Snake::draw()
{
	for (int i = 0; i < body.size(); ++i)
	{
		body[i].draw(sign);
	}
}

void Snake::move()
{
	int x = 0, y = 0;
	switch (direction)
	{
	case Up:
		y = -1;
		break;
	case Down:
		y = 1;
		break;
	case Left:
		x = -1;
		break;
	case Right:
		x = 1;
		break;
	default:
		break;
	}
	for (int i = body.size() - 1; i > 0; --i) {
		body[i].x = body[i - 1].x;
		body[i].y = body[i - 1].y;
	}
	body[0].x += x;
	body[0].y += y;
}

bool Snake::eats(const Coordinate & food) const
{
	return body[0] == food;
}

bool Snake::eatsEatself() const
{
	for (int i = 1; i < body.size(); ++i)
	{
		if (body[0] == body[i]) 
		{
			return true;
		}
	}
	return false;
}

void Snake::eat(Coordinate food)
{
	body.push_back(food);
}
