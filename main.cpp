#include <iostream>
#include <string>
#include <stdlib.h>

class Entity
{
private:
	int* m_X, *m_Y;
	mutable int var;	// "mutable" makes sures that var can be changed in const function

public:
	const int* const GetX() const
	{
		var = 2;
		return m_X;
	}

	const int* const GetY() const
	{
		return m_Y;
	}
};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}

int main()
{
	Entity e;


	const int MAX_AGE = 80;

	const int* const a = new int;

	std::cin.get();
} 