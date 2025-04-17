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
	const char* ptr = "Hello";
	
	if (ptr)
		Log(ptr);
	else if (ptr == "Hello")
		Log("ptr is Hello!");
	else
		Log("ptr is nullptr!");

	std::cin.get();

	return 0;
}