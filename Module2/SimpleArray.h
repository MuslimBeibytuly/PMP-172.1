#pragma once
class SimpleArray
{
public:
	int *a;
	size_t size;
	SimpleArray(size_t);
	SimpleArray(const SimpleArray &);
	~SimpleArray();
};

