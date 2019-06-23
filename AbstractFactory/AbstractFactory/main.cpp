#pragma once

#include "FactoryGrade1.h"
#include "FactoryGrade2.h"

int main(int argc, char* argv[])
{
	//Factory *factory = new FactoryGrade1();   // 制造一年级的书
	Factory *factory = new FactoryGrade2();     // 制造二年级的书

	Book *chinese = factory->CreateChineseBook();
	Book *math = factory->CreateMathBook();

	chinese->show();
	math->show();

	getchar();
}