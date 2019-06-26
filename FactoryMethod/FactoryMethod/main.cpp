#include <iostream>

#include "ChenguangFactory.h"
#include "DeliFactory.h"
int main(int argc, char *argv[])
{
	Factory *factory = new DeliFactory();  // �����ıʹ���
	//Factory *factory = new ChenguangFactory();  // ����ıʹ���
	Pen *pen1 = factory->constructe();
	Pen *pen2 = factory->constructe();
	Pen *pen3 = factory->constructe();

	// ��д
	pen1->write();
	pen2->write();
	pen3->write();

	getchar();
	return 0;
}