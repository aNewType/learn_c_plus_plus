#include <iostream>
#include <string>

class Example
{
private:

public:
	Example()
	{
		std::cout << "Create Entity!" << std::endl;
	}

	Example(int x)
	{
		std::cout << "Create Entity with " << x << "!" << std::endl;
	}
};

class Entity
{
private:
	int m_Score;
	std::string m_Name;
	Example m_Example;

public:
	Entity()
		: m_Score(0), m_Name("Unknow"), m_Example(8)
	{
	}

	Entity(const std::string& name)
		: m_Score(0), m_Name(name)
	{
	}

	const std::string& GetName() const 
	{ 
		return m_Name;  
	}
};

int main()
{
	Entity e0;

	std::cin.get();
} 