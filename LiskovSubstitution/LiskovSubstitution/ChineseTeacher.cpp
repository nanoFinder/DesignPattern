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
	return "chinese";
}

void ChineseTeacher::information()
{
	std::cout << "My name is " + getName() + "." << std::endl;
	teach();
}
