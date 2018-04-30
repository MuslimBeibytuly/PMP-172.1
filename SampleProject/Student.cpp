#include "Student.h"

Student::Student()
{
}

Student::~Student()
{
}

int Student::getAverageMark()
{
	int total = 0;
	for (int mark : marks)
	{
		total += mark;
	}
	return total / marks.size();
}

void Student::addMark(int mark)
{
	marks.push_back(mark);
}

void Student::setFullname(std::string _fullname)
{
	fullname = _fullname;
}

std::string Student::getFullname()
{
	return fullname;
}

void Student::setAge(int _age)
{
	age = _age;
}

int Student::getAge()
{
	return age;
}
