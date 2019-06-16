#pragma once
#include "Teacher.h"
class ChineseTeacher :
	public Teacher
{
public:
	ChineseTeacher();
	~ChineseTeacher();

	virtual void teach();
};

