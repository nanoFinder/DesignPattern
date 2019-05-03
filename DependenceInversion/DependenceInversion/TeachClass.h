#pragma once
#include "TeachWay.h"
class TeachClass :
	public TeachWay
{
public:
	TeachClass();
	~TeachClass();

	virtual std::string getWay();
};

