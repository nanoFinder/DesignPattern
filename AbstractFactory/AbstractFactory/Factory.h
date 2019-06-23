#pragma once
#include "Book.h"
class Factory
{
public:
	virtual ~Factory() {}

	virtual Book* CreateChineseBook() = 0;
	virtual Book* CreateMathBook() = 0;
};
