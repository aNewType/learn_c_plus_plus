#include <iostream>

class Entity
{
public:
	float X, Y;

	void Move(float x_a, float y_a)
	{
		X += x_a;
		Y += y_a;
	}
};

class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;

	Player player;
	//player.PrintName();
	player.Move(5, 5);
	std::cin.get();
} 