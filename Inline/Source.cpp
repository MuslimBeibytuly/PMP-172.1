#include <iostream>

inline int square(int x)
{
	return x * x;
}

void main()
{
	std::cout << square(5) << std::endl;
}