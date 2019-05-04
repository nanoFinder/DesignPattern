#include "HeadMaster.h"



HeadMaster::HeadMaster(std::string name)
{
	this->name = name;
}

HeadMaster::~HeadMaster()
{
}

void HeadMaster::addHeadTeacher(HeadTeacher ht)
{
	headTeachers.push_back(ht);
}

void HeadMaster::showAllStudentName()
{
	for (int index = 0; index != headTeachers.size(); ++index)
	{
		headTeachers[index].showStudentName();
	}
}
