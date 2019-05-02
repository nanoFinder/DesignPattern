#include "HeadTeacher.h"

HeadTeacher* HeadTeacher::instance = nullptr;

HeadTeacher::HeadTeacher()
{
}

HeadTeacher::~HeadTeacher()
{
}

HeadTeacher* HeadTeacher::getInstance()
{
	if (nullptr == instance)
	{
		instance = new HeadTeacher();
	}

	return instance;
}
