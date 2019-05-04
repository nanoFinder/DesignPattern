#pragma once
#include <string>
class Teacher
{
public:
	Teacher();
	virtual ~Teacher();

	virtual void teach() = 0;
};

