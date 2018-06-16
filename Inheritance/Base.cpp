#include "Base.h"

std::string Base::info()
{
	return "I'm Base class";
}

Base::Base(const std::string & text) : text(text)
{
}

Base::~Base()
{
}
