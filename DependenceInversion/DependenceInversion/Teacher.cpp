#include "Teacher.h"

#include <iostream>

Teacher::Teacher()
{	
}


Teacher::~Teacher()
{
}

void Teacher::teach(TeachWay *way)
{
	std::cout << "I teache a course " +  way->getWay() + "." << std::endl;
}
