#pragma once
#include "TeachWay.h"
class TeachOnline :
	public TeachWay
{
public:
	TeachOnline();
	~TeachOnline();

	virtual std::string getWay();
};

