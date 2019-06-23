#pragma once

#include "FactoryGrade1.h"
#include "FactoryGrade2.h"

int main(int argc, char* argv[])
{
	//Factory *factory = new FactoryGrade1();   // ����һ�꼶����
	Factory *factory = new FactoryGrade2();     // ������꼶����

	Book *chinese = factory->CreateChineseBook();
	Book *math = factory->CreateMathBook();

	chinese->show();
	math->show();

	getchar();
}