#pragma once
#include <iostream>
class String
{
	char * data;
	size_t size;
public:
	String();
	String(const String &);
	~String();
	size_t count() const;
	void print() const;
	void addCharacter(const char &);
};

