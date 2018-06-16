#pragma once
#include "Observer.h"
#include <iostream>
class Reader
	: public Observer
{
public:
	void handleEvent();
	Reader();
	~Reader();
};

