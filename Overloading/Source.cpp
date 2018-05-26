#include <iostream>
#include "Vector.h"
#include "Integer.h"
#include <cassert>
void vector() 
{
	Vector v1, v2;
	v1 += 5;
	v1 += 6;
	v2 += 1;
	v2 += 4;
	//v2 = v1 + 5;

	v1 += v2;

	/*for (int i = 0; i < v1.count(); ++i)
	{
	std::cout << v1[i] << std::endl;
	}*/
	int x = 5, y = 5;
	std::cout << (v1 == v2) << std::endl;
}

void integer1() 
{
	//Integer x, a;
	//a = 1;
	////assert((++x) == a);
	//Integer y, z;
	//y = 1, z = 2;
	//std::cout << (x++).getValue() << std::endl;
	/*assert((x++) == y);
	assert(x == z);*/
	/*int a = 5;
	std::cout << ++a << ' ' << a++ << std::endl;*/
}
void main() 
{
	Integer a = 5;
	int x = (int)a;
	std::cout << x << std::endl;
	system("pause");
}
