#include <iostream>

enum Example : const int
{
	A = 5, B, C
};

int main1()
{
	Example value = B;
	if (value == Example::A)
	{
		// do something here
	}
	std::cin.get();
	return 0;
}