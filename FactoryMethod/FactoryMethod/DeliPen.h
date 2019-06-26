#pragma once

#include "Pen.h"
#include <iostream>

class DeliPen : public Pen
{
public:
	virtual void write()
	{
		std::cout << "De li Pen" << std::endl;
	}
};