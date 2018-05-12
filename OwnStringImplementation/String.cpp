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

//void String::operator+=(const char & symbol)
//{
//	addCharacter(symbol);
//}
//
//void String::operator+=(const String & s)
//{
//	concat(s);
//}

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

void String::clear()
{
	free(data);
	size = 0;
	data = nullptr;
}

void String::concat(const String & s)
{
	data = (char*)realloc(data, (size + s.size) * sizeof(char));
	for (size_t i = size, j = 0; i < size + s.size; ++i, ++j)
	{
		data[i] = s.data[j];
	}
	size += s.size;
}

void String::addCharacter(const char & c)
{
	if (data == nullptr)
	{
		data = (char*)malloc(1 * sizeof(char));
		data[0] = c;
		++size;
	}
	else
	{
		data = (char*)realloc(data, ++size * sizeof(char));
		data[size - 1] = c;
	}
}