#pragma once
#include <string>

class TeachWay
{
public:
	TeachWay();
	virtual ~TeachWay();

	virtual std::string getWay() = 0;   // ��ȡ��ʽ
};

