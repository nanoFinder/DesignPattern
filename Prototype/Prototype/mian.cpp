#include "StudentInfo.hpp"

int main(int argc, char *agrv[])
{
	StudentInfo zhangSan;
	StudentInfo liSi;
	StudentInfo wangWu;

	// ����ԭ��
	zhangSan.setGrade("Grade 1");
	zhangSan.setHeadTeacher("Li Cun Feng");
	// ����ԭ��
	zhangSan.clone(&liSi);
	zhangSan.clone(&wangWu);
	// ��д������Ϣ
	zhangSan.setName("Zhang San");
	liSi.setName("Li Si");
	wangWu.setName("Wang Wu");

	// �����Ϣ
	zhangSan.show();
	liSi.show();
	wangWu.show();

	getchar();
	return 0;
}