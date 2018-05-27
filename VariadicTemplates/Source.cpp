#include <initializer_list>
#include <iostream>
#include "MyString.h"
template <typename ... Args>
void function(Args... args)
{
	int r = 5;
	for (auto && it : std::initializer_list<Point>{ args... })
	{
		if (it.x * it.x + it.y * it.y < r * r)
		{
			std::cout << it.x << ' ' << it.y << std::endl;
		}
	}
}

template <typename T, typename ... Args>
void print(T t, Args... args)
{
	std::cout << t << std::endl;
	print(args...);
}

template <typename T>
void print(T t)
{
	std::cout << t << std::endl;
}

template <typename T, typename ... Args>
double sum(T t, Args... args)
{
	return t + sum(args...);
}

template <typename T>
double sum(T t)
{
	return t;
}


class Point
{
public:
	Point(int x, int y) : x(x), y(y) {}
	int x, y;
};

void main()
{
	//function(Point(1, 2), Point(2, 3), Point(1, 1), Point(1, 3), Point(3, 4), Point(5, 6));
	//print(1, 'v', 3, "vjufdnvkd", 1.354, 'c');
	//std::cout << sum(1, 3, 23, 32.1) << std::endl;
	MyString x = "abcde";
	std::cout << x << std::endl;
	/*for (char & c : x)
	{
		std::cout << c << ' ';
	}*/
	std::cin >> x;
	system("pause");
}