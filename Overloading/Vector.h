#pragma once
#include <cstdlib>
class Vector
{
	int *data;
	size_t size;
public:
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

