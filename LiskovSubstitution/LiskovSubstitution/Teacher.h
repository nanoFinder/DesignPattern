#pragma once
#include <string>
class Teacher
{
public:
	Teacher();
	virtual ~Teacher();

	virtual void teach();

	std::string getName();
	void setName(std::string name);

private:
	std::string name;
};

