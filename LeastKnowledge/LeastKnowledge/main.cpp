#include <iostream>
#include "HeadMaster.h"

int main(int agrc, char* argv[])
{
	// ����ѧ��
	Student stW1("Wang1");
	Student stW2("Wang2");
	Student stW3("Wang3");
	Student stW4("Wang4");
	Student stL1("Li1");
	Student stL2("Li1");

	// ���ɰ�����
	HeadTeacher htW("Wang");
	HeadTeacher htL("Li");

	// ����У��
	HeadMaster hm("Zhang");

	// ����ѧ����������
	htW.addStudent(stW1);
	htW.addStudent(stW3);
	htW.addStudent(stL1);
	htW.addStudent(stL2);
	htL.addStudent(stW2);
	htL.addStudent(stW4);

	// ��������θ�У��
	hm.addHeadTeacher(htW);
	hm.addHeadTeacher(htL);

	// ���ȫУѧ������
	hm.showAllStudentName();

	getchar();
	return 0;
}