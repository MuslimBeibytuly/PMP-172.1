#pragma once
class B
{
	int x, y;
	char z;
public:
	explicit B(int x)
	{
		this->x = x;
	}
	void setZ(char z)
	{
		this->z = z;
	}
	B getMyObject() const 
	{
		return *(this);
	}
	char getZ() const 
	{
		return z;
	}
	B();
	~B();
};

