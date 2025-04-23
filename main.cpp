#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class Player
{
public:
	int x, y;
	int speed;
	
	void Move( int x_a, int y_a)
	{
		x += x_a * speed;
		y += y_a * speed;
	}
};


int main()
{
	Player player;
	player.x = 5;
	player.Move(1, -1);

	std::cin.get();
}