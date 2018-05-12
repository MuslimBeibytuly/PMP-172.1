#pragma once
class Simple2DArray
{
public:
	int **a;
	int n, m;
	Simple2DArray(int, int);
	Simple2DArray(const Simple2DArray &);
	~Simple2DArray();
};
