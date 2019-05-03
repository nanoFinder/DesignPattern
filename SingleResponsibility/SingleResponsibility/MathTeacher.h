#pragma once
#include "Teacher.h"
class MathTeacher :
	public Teacher
{
public:
	MathTeacher();
	~MathTeacher();

	virtual void teach();
};

