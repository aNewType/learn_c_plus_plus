#include <iostream>
#include <string>

void PrintString(const std::string& name)
{
	std::cout << name << std::endl;
}

int main()
{
	std::string name = std::string("cherno") + " hello!";
	PrintString(name);
	bool contains = name.find("no") != std::string::npos;
	std::cout << name << std::endl;

 	std::cin.get();
} 