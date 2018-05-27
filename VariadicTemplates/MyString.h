#pragma once
#include <ostream>
#include <cstring>
class MyString
{
	char * data;
	size_t size;
public:
	MyString(const char *);
	friend std::ostream & operator<<(std::ostream &, const MyString &);
	MyString();
	~MyString();
};
