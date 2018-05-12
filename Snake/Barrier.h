#pragma once
#include "Coordinate.h"
#include <vector>
class Barrier
{
	char sign;
public:
	std::vector<Coordinate> body;
	Barrier();
	~Barrier();
	void draw();
};

