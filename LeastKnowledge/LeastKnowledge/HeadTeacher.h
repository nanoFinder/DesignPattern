#pragma once
#include <string>
#include <vector>
#include "Student.h"
// 班主任类
class HeadTeacher
{
public:
	HeadTeacher(std::string name);
	HeadTeacher(const HeadTeacher &ht); // 因为使用vector和string, 需实现拷贝构造函数
	~HeadTeacher();
	
	void addStudent(Student st);   // 添加同学
	void showStudentName();        // 显示所有同学名字
private:
	std::string name;
	std::vector<Student> students;  // 保存学生
};

