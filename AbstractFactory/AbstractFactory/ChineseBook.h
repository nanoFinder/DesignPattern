#pragma once
#include "Book.h"
class ChineseBook : public Book
{
public:
	virtual ~ChineseBook() {}
	virtual void show() = 0;
};