#pragma once
#include <iostream>
class Example
{
public:
	int x, y, z;
	Example();
	Example(const Example &);
	Example(int, int, int);
	int sum(int);
	~Example();
};
