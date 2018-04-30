#include <iostream>

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

int main() {
	Circle a;
	a.setRadius(100);
	std::cout << "radius: " << a.getRadius() << std::endl;
	std::cout << "area: " << a.getArea() << std::endl;
	system("pause");
	return 0;
}
