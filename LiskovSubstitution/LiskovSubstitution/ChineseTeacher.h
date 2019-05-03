#pragma once
#include "Teacher.h"
class ChineseTeacher :
	public Teacher
{
public:
	ChineseTeacher();
	~ChineseTeacher();

	virtual void teach();

	std::string getName();

	void information();  // 显示个人信息
};

