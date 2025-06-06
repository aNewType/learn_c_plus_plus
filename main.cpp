#include <iostream>
#include <string>

static int s_Level = 8;
static int s_Speed = 2;

int main()
{
	if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;
	std::cout << s_Speed << std::endl;

	s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;
	std::cout << s_Speed << std::endl;

	std::string rank = s_Level > 10 ? "Master" : "Beginner";
	std::cout << rank << std::endl;

	std::string otherRank;
	if (s_Level > 10)
		otherRank = "Master";
	else
		otherRank = "Beginner";
	std::cout << otherRank << std::endl;

	std::cin.get();
} 