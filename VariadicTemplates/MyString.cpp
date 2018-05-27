#include "MyString.h"


MyString::MyString(const char * characters)
{
	size = strlen(characters);
	data = new char[size];
	for (size_t position = 0; position < size; ++position)
	{
		data[position] = characters[position];
	}
}

void MyString::operator+=(const char & character)
{
	push_back(character);
}

void MyString::push_back(const char & character)
{
	++size;
	if (data == nullptr)
	{
		data = (char *)malloc(size * sizeof(char));
	}
	else
	{
		data = (char *)realloc(data, ++size * sizeof(char));
	}
	data[size - 1] = character;
}

char * MyString::begin()
{
	return &data[0];
}

char * MyString::end()
{
	return &data[size];
}

MyString::MyString()
{
	size = 0;
	data = nullptr;
}


MyString::~MyString()
{
	delete[] data;
}

std::ostream & operator<<(std::ostream & ostream, const MyString & mystring)
{
	for (size_t position = 0; position < mystring.size; ++position)
	{
		ostream << mystring.data[position];
	}
	return ostream;
}

std::istream & operator >> (std::istream & istream, MyString & mystring)
{
	char * buffer = new char[64];
	istream.get(buffer, 64);
	mystring = buffer;
	mystring.size = 64;
	delete[] buffer;

	return istream;
}
