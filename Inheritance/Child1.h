#pragma once
#include "Base.h"
class Child1
	: public Base
{
public:
	std::string info();
	Child1(const std::string & text);
	~Child1();
};

