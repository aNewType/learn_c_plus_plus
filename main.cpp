#include <iostream>
#include "Log.h"

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
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World!");
	}

	Log("Hello World!");
	Log("Hello World!");
	Log("Hello World!");
	Log("Hello World!");
	Log("Hello World!");

	std::cin.get();

	return 0;
}