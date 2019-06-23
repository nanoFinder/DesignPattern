#pragma once

#include "Factory.h"
#include "ChineseBookGrade1.h"
#include "MathBookGrade1.h"
class FactoryGrade1 : public Factory
{
public:
	Book* CreateChineseBook()
	{
		return new ChineseBookGrade1();
	};

	Book* CreateMathBook()
	{
		return new MathBookGrade1();
	}
};