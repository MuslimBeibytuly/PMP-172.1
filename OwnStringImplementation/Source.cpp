#include "String.h"

void main() 
{
	String x;
	x.addCharacter('a');
	x.print();
	x.addCharacter('b');
	x.print();
	x.addCharacter('c');
	x.print();
	x.addCharacter('d');
	x.print();
	x.addCharacter('e');
	x.print();
	String y(x);
	y.print();
	y.concat(x);
	y.print();	
	system("pause");
}
