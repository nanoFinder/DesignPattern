#include "HeadTeacher.h"

HeadTeacher::HeadTeacher(std::string name)
{
	this->name = name;
}

HeadTeacher::HeadTeacher(const HeadTeacher &ht)
{
	name = ht.name;
	students = ht.students;
}

HeadTeacher::~HeadTeacher()
{
}

void HeadTeacher::addStudent(Student st)
{
	students.push_back(st);
}

void HeadTeacher::showStudentName()
{
	for (int index = 0; index != students.size(); ++index)
	{
		students[index].showName();
	}
}
