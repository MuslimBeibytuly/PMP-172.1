#include "DynamicArray.h"
#include <iostream>
#include <vector>

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
	/*std::vector<std::vector<int>> x;*/
	/*DynamicArray<DynamicArray<char>> x;
	DynamicArray<char> y;
	y += 'a';
	y += 'b';
	x += y;
	std::cout << x[0][0] << ' ' << x[0][1] << std::endl;*/
	auto x = 5;
	decltype(x) y = 10;
	std::cout << x << ' ' << y << std::endl;
	system("pause");
}
