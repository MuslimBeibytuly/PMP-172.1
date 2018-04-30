#pragma once
#include <string>
#include <vector>
class Student
{
	std::string fullname, group;
	int age;
	std::vector<int> marks;
public:
	Student();
	~Student();
	int getAverageMark();
	void addMark(int);
	void setFullname(std::string);
	std::string getFullname();
	void setAge(int);
	int getAge();
};
