#pragma once

#include "Factory.h"
#include "ChineseBookGrade2.h"
#include "MathBookGrade2.h"
class FactoryGrade2 : public Factory
{
public:
	Book* CreateChineseBook()
	{
		return new ChineseBookGrade2();
	};

	Book* CreateMathBook()
	{
		return new MathBookGrade2();
	}
};