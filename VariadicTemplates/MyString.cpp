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

MyString::MyString()
{
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
