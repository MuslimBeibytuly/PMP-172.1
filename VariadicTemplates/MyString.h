#pragma once
#include <iostream>
#include <istream>
#include <ostream>
#include <cstring>
#include <string>
class MyString
{
	char * data;
	size_t size;
public:
	MyString(const char *);
	void operator+=(const char &);
	void push_back(const char &);
	friend std::ostream & operator<<(std::ostream &, const MyString &);
	friend std::istream & operator>>(std::istream &, MyString &);
	void operator +=(const char &);
	void operator +=(const MyString &);
	void operator +=(const std::string &);
	void operator +=(const char *);
	char * begin();
	char * end();
	MyString();
	~MyString();
};
