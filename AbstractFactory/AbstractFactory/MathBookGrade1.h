#pragma once

#include <iostream>
#include "MathBook.h"
class MathBookGrade1 : public MathBook
{
public:
	void show()
	{
		std::cout << "I am a math book of grade 1." << std::endl;
	}
};