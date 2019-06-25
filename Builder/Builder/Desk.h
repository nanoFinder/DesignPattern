#pragma once

class Desk
{
public:
	virtual ~Desk() {}

	virtual void board() = 0;  // ×ÀÃæ
	virtual void stick() = 0;  // ×ÀÍÈ
};