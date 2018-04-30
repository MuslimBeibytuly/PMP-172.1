#include <iostream>
#include "Student.h"

class Circle
{
private:
	double radius;
public:
	double getArea()
	{
		return 3.14 * radius * radius;
	}
	//модификатор
	void setRadius(double _radius) {
		radius = _radius;
	}
	//инспектор
	double getRadius() {
		return radius;
	}
};

void sample() {
	Student s;
	s.addMark(5);
	s.addMark(4);
	s.addMark(3);
	s.addMark(2);
	s.addMark(1);
	s.addMark(6);
	s.addMark(7);
	std::cout << s.getAverageMark() << std::endl;
	s.setFullname("Muslim Beibytuly");
	std::cout << s.getFullname() << std::endl;
}

int main() {

	system("pause");
	return 0;
}
