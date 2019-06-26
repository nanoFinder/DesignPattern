#pragma once

#include "Pen.h"
class Factory
{
public:
	virtual ~Factory() {}
	virtual Pen* constructe() = 0;
};