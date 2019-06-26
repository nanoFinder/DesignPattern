#pragma once
#include "Pen.h"
#include <iostream>

class ChenguangPen : public Pen
{
public:
	virtual void write()
	{
		std::cout << "Chen guang Pen" << std::endl;
	}
};