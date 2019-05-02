#include <iostream>
#include "HeadTeacher.h"

int main(int agrc, char* argv[])
{
	HeadTeacher* ht1 = HeadTeacher::getInstance();
	HeadTeacher* ht2 = HeadTeacher::getInstance();

	if (ht1 == ht2)
	{
		std::cout << "They are the same person." << std::endl;
	}
	else
	{
		std::cout << "They are different people." << std::endl;
	}

	getchar();
	return 0;
}