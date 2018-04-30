#include "Food.h"



Food::Food()
{
	sign = '#';
	body = { rand() % 20, rand() % 20 };
}

void Food::reinit()
{
	body = { rand() % 20, rand() % 20 };
}

void Food::draw()
{
	body.draw(sign);
}


Food::~Food()
{
}
