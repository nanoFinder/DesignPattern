#include <iostream>
#include "HeadMaster.h"

int main(int agrc, char* argv[])
{
	// 生成学生
	Student stW1("Wang1");
	Student stW2("Wang2");
	Student stW3("Wang3");
	Student stW4("Wang4");
	Student stL1("Li1");
	Student stL2("Li1");

	// 生成班主任
	HeadTeacher htW("Wang");
	HeadTeacher htL("Li");

	// 生成校长
	HeadMaster hm("Zhang");

	// 分配学生给班主任
	htW.addStudent(stW1);
	htW.addStudent(stW3);
	htW.addStudent(stL1);
	htW.addStudent(stL2);
	htL.addStudent(stW2);
	htL.addStudent(stW4);

	// 分配版主任给校长
	hm.addHeadTeacher(htW);
	hm.addHeadTeacher(htL);

	// 输出全校学生名称
	hm.showAllStudentName();

	getchar();
	return 0;
}