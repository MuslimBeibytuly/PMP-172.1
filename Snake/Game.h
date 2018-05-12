#pragma once
#include "Snake.h"
#include "Food.h"
#include "Barrier.h"
#include <iostream>
class Game
{
	Food food;
	int score;
	bool processing;
	Game();
public:
	Barrier barrier;
	Snake snake;
	~Game();
	void process();
	bool snakeCrushes();
	static Game & getInstance();
};

