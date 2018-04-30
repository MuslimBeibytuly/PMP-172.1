#pragma once
#include <vector>
#include "Student.h"
class ListOfStudents
{
public:
	std::vector<Student> students;
	ListOfStudents();
	~ListOfStudents();
	void addStudent(std::string, int);
	void removeStudent(std::string);
};

