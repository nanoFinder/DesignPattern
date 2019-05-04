#include "HeadStudent.h"

#include <iostream>

HeadStudent::HeadStudent()
{
}


HeadStudent::~HeadStudent()
{
}

void HeadStudent::learn()
{
	std::cout << "I love learning." << std::endl;
}

std::string HeadStudent::getName()
{
	return name;
}

void HeadStudent::setName(std::string name)
{
	this->name = name;
}
