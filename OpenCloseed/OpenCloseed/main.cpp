#include <iostream>
#include "ChineseTeacher.h"
#include "MathTeacher.h"

int main(int agrc, char* argv[])
{
	ChineseTeacher chineseTh;
	MathTeacher mathTh;

	chineseTh.teach();
	mathTh.teach();

	getchar();
	return 0;
}