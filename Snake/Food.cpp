#include "Food.h"
#include "Game.h"

Food::Food()
{
	sign = '#';
	body.push_back({ rand() % 18 + 2, rand() % 18 + 2 });
}

void Food::reinit()
{
	body[0] = { rand() % 18 + 2, rand() % 18 + 2 };
	for (Coordinate coordinate : Game::getInstance().snake.body) {
		if (body[0] == coordinate)
		{
			reinit();
		}
	}
}

Food::~Food()
{
}
