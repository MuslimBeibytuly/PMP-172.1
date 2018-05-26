#pragma once
#include <ostream>
#include <istream>
class Integer
{
	int value;
public:
	Integer() = delete;
	Integer(const int &);
	//Integer(Integer &&);
	Integer & operator++();
	Integer operator++(int);
	Integer & operator&();
	void operator=(const int &);
	void operator=(const Integer &);
	friend bool operator==(const Integer &, const Integer &);
	friend std::ostream & operator<<(std::ostream &, const Integer &);
	friend std::istream & operator>>(std::istream &, Integer &);
	explicit operator int() const;
	int getValue() const;
	~Integer();
};

