#include "ListOfStudents.h"



ListOfStudents::ListOfStudents()
{
}


ListOfStudents::~ListOfStudents()
{
}

void ListOfStudents::addStudent(std::string fullname, int age)
{
	Student s;
	s.setFullname(fullname);
	s.setAge(age);
	students.push_back(s);
}

void ListOfStudents::removeStudent(std::string)
{
}
