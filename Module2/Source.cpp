#include "Example.h"
#include "SimpleArray.h"
void sample() {
	Example x1;
	Example x2(x1);
}

void sampleForSimpleArray()
{
	SimpleArray s1(3);
	s1.a[0] = 1;
	s1.a[1] = 2;
	s1.a[2] = 3;
	SimpleArray s2(s1);
	for (int i = 0; i < s1.size; ++i) 
	{
		std::cout << s1.a[i] << ' ' << s2.a[i] << std::endl;
	}
}
void main()
{
	sampleForSimpleArray();
	system("pause");
}