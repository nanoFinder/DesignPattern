#include "Teacher.h"

#include <iostream>

Teacher::Teacher()
{	
}


Teacher::~Teacher()
{
}

void Teacher::teach()
{
	std::cout << "I teache a course." << std::endl;
}

std::string Teacher::getName()
{
	return name;
}

void Teacher::setName(std::string name)
{
	this->name = name;
}
