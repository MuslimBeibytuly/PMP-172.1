#pragma once
#include <iostream>
class String
{
	char * data;
	size_t size;
public:
	explicit String();
	explicit String(const String &);
	~String();
	size_t count() const;
	void print() const;
	void addCharacter(const char &);
};
