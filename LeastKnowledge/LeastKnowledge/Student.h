#pragma once
#include <string>
class Student
{
public:
	Student(std::string name);
	Student(const Student &st); // ��Ϊʹ��vector��string, ��ʵ�ֿ������캯��
	~Student();

	void showName();   // ��ʾ����
	
private:
	std::string name;
};

