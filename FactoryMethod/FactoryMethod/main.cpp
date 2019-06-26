#include <iostream>

#include "ChenguangFactory.h"
#include "DeliFactory.h"
int main(int argc, char *argv[])
{
	Factory *factory = new DeliFactory();  // 得力的笔工厂
	//Factory *factory = new ChenguangFactory();  // 晨光的笔工厂
	Pen *pen1 = factory->constructe();
	Pen *pen2 = factory->constructe();
	Pen *pen3 = factory->constructe();

	// 书写
	pen1->write();
	pen2->write();
	pen3->write();

	getchar();
	return 0;
}