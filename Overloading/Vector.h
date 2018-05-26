#pragma once
#include "Integer.h"
#include <cstdlib>
class Vector
{
	int *data;
	size_t size;
public:
	friend class Integer;
	void push_back(const int &);
	void operator+=(const int &);
	void operator+=(const Vector &);
	Vector & operator+(const int &);
	bool operator==(const Vector &) const;
	bool operator<(const Vector &) const;
	const int & operator [](size_t) const;
	size_t count() const;
	Vector();
	~Vector();
};

