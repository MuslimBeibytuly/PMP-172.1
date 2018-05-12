#include "String.h"
#include <cstdlib>

String::String()
{
	data = nullptr;
	size = 0;
}

String::String(const String & s)
{
	this->size = s.size;
	data = (char*)malloc(size * sizeof(char));
	for (int i = 0; i < size; ++i) 
	{
		this->data[i] = s.data[i];
	}
}

String::~String()
{
	free(data);
}

size_t String::count() const
{
	return size;
}

void String::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << data[i];
	}
	std::cout << std::endl;
}

void String::addCharacter(const char & symbol)
{
	if (data == nullptr)
	{
		data = (char*)malloc(1 * sizeof(char));
		data[0] = symbol;
		++size;
	}
	else
	{
		data = (char*)realloc(data, ++size * sizeof(char));
		data[size - 1] = symbol;
	}
}
