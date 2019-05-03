#pragma once
#include "TeachWay.h"
class Teacher
{
public:
	Teacher();
	virtual ~Teacher();

	virtual void teach(TeachWay *way);
};

