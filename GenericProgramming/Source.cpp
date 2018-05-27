#include "DynamicArray.h"
#include <iostream>

template <typename Type>
Type average(const DynamicArray<Type> & x, size_t position = 0, Type sum = 0)
{
	if (position < x.size)
	{
		return average(x, position + 1, sum + x.data[position]);
	}
	return (sum / x.size);
}

char average(const DynamicArray<char> & x, size_t position = 0, int sum = 0)
{
	if (position < x.size)
	{
		return average(x, position + 1, sum + x.data[position]);
	}
	return (char)(sum / x.size);
}

void main() 
{
	DynamicArray<char> x;
	x += 'a';
	x += 'b';
	x += 'c';
	x += 'd';
	x += 'e';
	std::cout << average(x) << std::endl;

	DynamicArray<int> y;
	y += 1;
	y += 2;
	y += 3;
	y += 4;
	y += 5;
	std::cout << average<int>(y) << std::endl;

	system("pause");
}
