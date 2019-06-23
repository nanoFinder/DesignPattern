#pragma once
#include <iostream>
#include "ChineseBook.h"
class ChineseBookGrade2 : public ChineseBook
{
public:
	void show()
	{
		std::cout << "I am a chinese book of grade 2." << std::endl;
	}
};