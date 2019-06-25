#pragma once


#include "Desk.h"

class Builder
{
public:
	void construct(Desk * const desk)
	{
		desk->board();
		desk->stick();
	}
};