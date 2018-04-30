#pragma once
#include <iostream>
#include <fstream>
class Point
{
private:
	int x, y, z;
	Point();
	Point(int, int, int);
public:
	~Point();
	void show();
	void writePointToFile();
	void readPointFromFile();
	static Point & getInstance();
	void setX(int);
};
