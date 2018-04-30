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
		snake.draw();
		food.draw();
		Sleep(200);
	}
}


Game::~Game()
{
}
