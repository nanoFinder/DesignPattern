#include <iostream>

#include "Teacher.h"
#include "TeachClass.h"
#include "TeachOnline.h"

int main(int agrc, char* argv[])
{
	// ������ѧ��ʽ
	TeachClass tc; 
	TeachOnline to;

	// ������ʦ
	Teacher th;

	// ��ʦͨ����ͬ�ķ�ʽ��ѧ
	th.teach(&tc);
	th.teach(&to);

	getchar();
	return 0;
}