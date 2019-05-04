#pragma once
#include <string>
#include <vector>
#include "Student.h"
// ��������
class HeadTeacher
{
public:
	HeadTeacher(std::string name);
	HeadTeacher(const HeadTeacher &ht); // ��Ϊʹ��vector��string, ��ʵ�ֿ������캯��
	~HeadTeacher();
	
	void addStudent(Student st);   // ���ͬѧ
	void showStudentName();        // ��ʾ����ͬѧ����
private:
	std::string name;
	std::vector<Student> students;  // ����ѧ��
};

