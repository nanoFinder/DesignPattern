#pragma once
#include "Book.h"
class MathBook : public Book
{
public:
	virtual ~MathBook() {}
	virtual void show() = 0;
};