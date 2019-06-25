#pragma once

#include <iostream>

#include "Desk.h"
class BigDesk : public Desk
{
public:
	~BigDesk() {}

	virtual void board()
	{
		std::cout << "The board of BigDesk is 46 ©O." << std::endl;
	}

	virtual void stick()
	{
		std::cout << "The stick of BigDesk is 1.4 m." << std::endl;
	}
};
