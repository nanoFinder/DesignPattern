#pragma once
#include <string>
#include <vector>
#include "HeadTeacher.h"
class HeadMaster
{
public:
	HeadMaster(std::string name);
	~HeadMaster();

	void addHeadTeacher(HeadTeacher ht);
	void showAllStudentName();

private:
	std::string name;
	std::vector<HeadTeacher> headTeachers;  // ±£´æ°àÖ÷ÈÎ
};

