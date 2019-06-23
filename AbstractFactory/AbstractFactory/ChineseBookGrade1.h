#pragma once

#include <iostream>
#include "ChineseBook.h"
class ChineseBookGrade1 : public ChineseBook
{
public:
	void show()
	{
		std::cout << "I am a chinese book of grade 1." << std::endl;
	}
};
