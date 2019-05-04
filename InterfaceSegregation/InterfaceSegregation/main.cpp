#include <iostream>

#include "ChineseTeacher.h"
#include "HeadStudent.h"

int main(int agrc, char* argv[])
{
	ChineseTeacher chineseTh;
	chineseTh.teach();

	HeadStudent hs;
	hs.learn();

	getchar();
	return 0;
}