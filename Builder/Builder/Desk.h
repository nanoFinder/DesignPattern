#pragma once

class Desk
{
public:
	virtual ~Desk() {}

	virtual void board() = 0;  // ����
	virtual void stick() = 0;  // ����
};