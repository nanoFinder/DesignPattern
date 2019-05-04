#include "Student.h"
#include <iostream>

Student::Student(std::string name)
{
	this->name = name;
}

Student::Student(const Student &st)
{
	name = st.name;
}

Student::~Student()
{
}

void Student::showName()
{
	std::cout << name << std::endl;
}
