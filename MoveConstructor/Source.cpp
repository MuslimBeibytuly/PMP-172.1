#include <iostream>
#include "Moving.h"
void main() 
{
	Moving m1;
	m1.s = "jfbvldfknbd";
	Moving m2(std::move(m1));
}
