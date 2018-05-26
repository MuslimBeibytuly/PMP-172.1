#include "Progression.h"
#include <iostream>
void main() 
{
	Progression p(1, 2);
	std::cout << p[5] << ' ' << p(5) << std::endl;
	system("pause");
}