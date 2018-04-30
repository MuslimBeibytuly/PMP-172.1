#include "Point.h"

void sample() {
	Point p1, p2(1, 2, 3);
	std::cout << "p1: ";
	p1.show();
	std::cout << "p2: ";
	p2.show();
}

int main()
{
	sample();
	system("pause");
	return 0;
}