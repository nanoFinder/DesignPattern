#pragma once
#include "Person.h"
#include "Teacher.h"
class ChineseTeacher :
	public Person, public Teacher
{
public:
	ChineseTeacher();
	~ChineseTeacher();

	virtual void teach();

	virtual std::string getName();
	virtual void setName(std::string name);

private:
	std::string name;
};

