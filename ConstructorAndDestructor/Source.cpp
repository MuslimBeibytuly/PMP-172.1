#include "Point.h"

void sample() {
	Point & p1 = Point::getInstance();
	p1.show();
	p1.setX(5);
	Point & p2 = Point::getInstance();
	p1.show();
	p2.show();
	p2.setX(10);
	p1.show();
	p2.show();
}

int main()
{
	sample();
	system("pause");
	return 0;
}
