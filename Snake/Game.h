#pragma once
#include "Snake.h"
#include "Food.h"
#include "Barrier.h"
#include <iostream>
class Game
{
	Snake snake;
	Food food;
	Barrier barrier;
	int score;
	bool processing;
public:
	Game();
	void process();
	~Game();
};

