#include "A.h"
void main() 
{
	A *a = new A();
	delete a;
	A *b = new A[10];
	b[0].doSomething();
	delete[] b;
	system("pause");
}