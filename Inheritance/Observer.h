#pragma once
class Observer
{
public:
	virtual void handleEvent() = 0;
	Observer();
	virtual ~Observer();
};

