#pragma once
#include <iostream>

#include "Desk.h"
class SmallDesk : public Desk
{
public:
	~SmallDesk() {}

	virtual void board()
	{
		std::cout << "The board of SmallDesk is 2.6 ©O." << std::endl;
	}

	virtual void stick()
	{
		std::cout << "The stick of SmallDesk is 1 m." << std::endl;
	}
};