#pragma once
#include "Factory.h"
#include "ChenguangPen.h"
class ChenguangFactory : public Factory
{
public:
	virtual Pen* constructe()
	{
		return new ChenguangPen();
	}
};
