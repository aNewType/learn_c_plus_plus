#include <iostream>
#include "log.h"

static int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main()
{
	unsigned int variable = 8;
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;

	short a = 'A';
	std::cout << a << std::endl;

	float variable1 = 5.5f;
	double var = 5.2;
	std::cout << variable1 << std::endl;

	bool variable2 = false;
	std::cout << variable2 << std::endl;
	std::cout << sizeof(bool) << std::endl;

	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);
	std::cin.get();
	return 0;
}