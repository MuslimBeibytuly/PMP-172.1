#pragma once
#include "Child1.h"
#include "Child2.h"
class Child
	: public Child1, public Child2
{
public:
	Child();
	~Child();
};

