#pragma once

#include <iostream>
#include "MathBook.h"
class MathBookGrade2 : public MathBook
{
public:
	void show()
	{
		std::cout << "I am a math book of grade 2." << std::endl;
	}
};