#include "ChineseTeacher.h"

#include <iostream>

ChineseTeacher::ChineseTeacher()
{
}


ChineseTeacher::~ChineseTeacher()
{
}

void ChineseTeacher::teach()
{
	std::cout << "I teache chinese." << std::endl;
}

std::string ChineseTeacher::getName()
{
	return name;
}

void ChineseTeacher::setName(std::string name)
{
	this->name = name;
}
