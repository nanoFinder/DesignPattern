#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

#include "Info.h"
class StudentInfo : public Info
{
public:
	StudentInfo() {}
	~StudentInfo() {}

	void setName(string name)
	{
		this->name = name;
	}

	void setGrade(string grade)
	{
		this->grade = grade;
	}

	void setHeadTeacher(string name)
	{
		this->headTeacher = name;
	}

	void show()
	{
		cout << "-----------------" << endl;
		cout << "name: " << name << endl;
		cout << "grade: " << grade << endl;
		cout << "headTeacher: " << headTeacher << endl;
		cout << "-----------------" << endl;
	}

	void clone(Info *info)
	{
		StudentInfo* tmp = dynamic_cast<StudentInfo*>(info);
		tmp->name = name;
		tmp->grade = grade;
		tmp->headTeacher = headTeacher;
	}

private:
	string name;
	string grade;
	string headTeacher;
};
