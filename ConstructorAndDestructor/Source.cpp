#include "Point.h"

void sample() {
	Point p1, p2(1, 2, 3);
	std::cout << "p1: ";
	p1.show();
	std::cout << "p2: ";
	p2.show();
	p2.writePointToFile();
	p1.readPointFromFile();
	std::cout << "p1 from p2: ";
	p1.show();
}

int main()
{
	sample();
	system("pause");
	return 0;
}