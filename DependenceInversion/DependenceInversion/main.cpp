#include <iostream>

#include "Teacher.h"
#include "TeachClass.h"
#include "TeachOnline.h"

int main(int agrc, char* argv[])
{
	// 创建教学方式
	TeachClass tc; 
	TeachOnline to;

	// 创建老师
	Teacher th;

	// 老师通过不同的方式教学
	th.teach(&tc);
	th.teach(&to);

	getchar();
	return 0;
}