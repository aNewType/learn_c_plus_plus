#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int value)
{
	value++;
}

void Increment_ptr(int* value)
{
	(*value)++;
}

void Increment_ref(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	// not to do any else to addition a variable as comparison
	Increment(a);
	LOG(a);

	// use a pointer to modify variable(a)
	Increment_ptr(&a);
	LOG(a);

	// use a reference to modify variable(a) int a function
	a = 5;
	Increment_ref(a);
	LOG(a);
	
	// use a reference to modify the variable(a)
	int& ref = a;
	a = 2;
	LOG(a);

	std::cin.get();
}