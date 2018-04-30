#pragma once
#include <iostream>
#include <fstream>
class Point
{
	int x, y, z;
public:
	Point();
	Point(int, int, int);
	~Point();
	void show();
	void writePointToFile();
	void readPointFromFile();
};
