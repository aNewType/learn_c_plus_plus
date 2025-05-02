#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
		X = 0.0f;
		Y = 0.0f;
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void print()
	{
		std::cout << X << ", " << Y << std::endl;
	}	
};

void Function()
{
	Entity e	;
	e.print();
}

int main()
{
	Function();
	std::cin.get();
}