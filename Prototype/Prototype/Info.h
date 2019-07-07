#pragma once
class Info
{
public:
	virtual ~Info() {}

	virtual void clone(Info* info) = 0;
	virtual void show() = 0;
private:

};
