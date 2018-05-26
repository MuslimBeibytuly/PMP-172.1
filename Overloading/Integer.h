#pragma once
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
	bool operator==(const Integer &) const;
	explicit operator int() const;
	int getValue() const;
	~Integer();
};

