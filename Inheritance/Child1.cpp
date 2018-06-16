#include "Child1.h"



std::string Child1::info()
{
	return "I'm Child1 class";
}

Child1::Child1(const std::string & text) : Base(text)
{
}


Child1::~Child1()
{
}
