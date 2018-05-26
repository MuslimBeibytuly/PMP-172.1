#pragma once
#include <string>
class Moving
{
public:
	std::string s;
	Moving(Moving &);
	Moving();
	~Moving();
};

