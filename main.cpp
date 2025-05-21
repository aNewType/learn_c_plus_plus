#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	mutable int m_DebugCount = 0;

public:
	Entity()
	{
		m_Name = "Unkonw";
	}

	Entity(const std::string& name)
	{
		m_Name = name;
	}

	const std::string& GetName() const 
	{ 
		m_DebugCount++;
		return m_Name;  
	}
};

int main()
{
	const Entity e;
	e.GetName();

	int x = 8;
	auto f = [=]() mutable
	{
		x++;
		std::cout << x << std::endl;
	};
	f();

	std::cin.get();
} 