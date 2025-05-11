#include <iostream>
#include <array>

class Entity
{
public:
	static const int exampleSize = 5;
	int example[exampleSize];
	//int* example = new int[5];

	std::array<int, 5> another;

	Entity()
	{
		for (int i = 0; i < exampleSize; i++)
			example[i] = 2;

		for (int i = 0; i < another.size(); i++)
			another[i] = 2;
	}
};

int main()
{
	// int example[5];
	// int* ptr = example;

	//for (int i = 0; i < 5; i++)
	//	example[i] = 2;

	//example[2] = 5;
	//*(int*)((char*)ptr + 8) = 6;	// *(ptr + 2) = 6;

	Entity e;

	/*int* another = new int[5];
	
	for (int i = 0; i < 5; i++)
		another[i] = 2;
	
	delete[] another;*/

 	std::cin.get();
} 