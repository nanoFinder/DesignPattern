#pragma once
#include <string>
class Student
{
public:
	Student(std::string name);
	Student(const Student &st); // 因为使用vector和string, 需实现拷贝构造函数
	~Student();

	void showName();   // 显示名称
	
private:
	std::string name;
};

