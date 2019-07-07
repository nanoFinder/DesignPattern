#include "StudentInfo.hpp"

int main(int argc, char *agrv[])
{
	StudentInfo zhangSan;
	StudentInfo liSi;
	StudentInfo wangWu;

	// 制作原型
	zhangSan.setGrade("Grade 1");
	zhangSan.setHeadTeacher("Li Cun Feng");
	// 复制原型
	zhangSan.clone(&liSi);
	zhangSan.clone(&wangWu);
	// 填写差异信息
	zhangSan.setName("Zhang San");
	liSi.setName("Li Si");
	wangWu.setName("Wang Wu");

	// 输出信息
	zhangSan.show();
	liSi.show();
	wangWu.show();

	getchar();
	return 0;
}