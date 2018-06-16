#include "Base.h"

std::string Base::info()
{
	return "I'm Base class";
}

Base::Base()
{
	std::cout << "Base()" << std::endl;
}

Base::~Base()
{
	std::cout << "~Base()" << std::endl;
}
