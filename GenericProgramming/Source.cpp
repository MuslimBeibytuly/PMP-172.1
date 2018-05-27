#include "DynamicArray.h"
#include <iostream>

template <typename Type>
Type average(const DynamicArray<Type> & x)
{
	Type sum = 0;
	for (size_t pos = 0; pos < x.size; ++pos) {
		sum += x.data[pos];
	}
	return (sum / x.size);
}

template <>
char average<char>(const DynamicArray<char> & x)
{
	int sum = 0;
	for (size_t pos = 0; pos < x.size; ++pos) {
		sum += x.data[pos];
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
	std::cout << x.average() << std::endl;

	DynamicArray<int> y;
	y += 1;
	y += 2;
	y += 3;
	y += 4;
	y += 5;
	std::cout << y.average() << std::endl;

	system("pause");
}
