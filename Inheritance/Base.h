#pragma once
#include <string>
#include <iostream>
class Base
{
public:
	std::string text;
	virtual std::string info();
	Base(const std::string & text);
	virtual ~Base();
};
