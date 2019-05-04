#pragma once
#include "Person.h"
#include "Student.h"

class HeadStudent :
	public Person, public Student
{
public:
	HeadStudent();
	~HeadStudent();

	virtual void learn();

	virtual std::string getName();
	virtual void setName(std::string name);

private:
	std::string name;
};

