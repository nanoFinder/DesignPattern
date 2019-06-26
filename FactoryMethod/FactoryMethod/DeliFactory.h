#pragma once

#include "Factory.h"
#include "DeliPen.h"
class DeliFactory : public Factory
{
public:
	virtual Pen* constructe()
	{
		return new DeliPen();
	}
};
