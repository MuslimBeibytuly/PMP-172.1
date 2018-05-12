#include "Game.h"

Game::Game()
{
}

void Game::process()
{
	processing = true;
	while (processing)
	{
		system("cls");
		if (_kbhit())
		{
			char action = _getch();
			switch (action)
			{
			case 'w':
				snake.direction = Snake::Up;
				break;
			case 's':
				snake.direction = Snake::Down;
				break;
			case 'a':
				snake.direction = Snake::Left;
				break;
			case 'd':
				snake.direction = Snake::Right;
				break;
			}
		}
		if (snake.eats(food.body))
		{
			snake.eat(food.body);
			food.reinit();
		}
		snake.move();
		barrier.draw();
		snake.draw();
		food.draw();
		if (snakeCrushes()) {
			processing = false;
		}
		Sleep(200);
	}
}

bool Game::snakeCrushes()
{
	for (Coordinate & c : barrier.body) {
		if (c.x == snake.body[0].x && c.y == snake.body[0].y) 
		{
			return true;
		}
	}
	return false;
}

Game & Game::getInstance()
{
	static Game instance;
	return instance;
}

Game::~Game()
{
}
