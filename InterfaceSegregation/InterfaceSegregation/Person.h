#pragma once
#include <string>
class Person
{
public:
	Person();
	virtual ~Person();

	virtual std::string getName() = 0;
	virtual void setName(std::string name) = 0;
};

