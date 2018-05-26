#pragma once
class Progression
{
	double a1, d;
public:
	Progression() = delete;
	Progression(const double &, const double &);
	double operator[](const int &) const;
	double operator()(const int &) const;
	~Progression();
};

