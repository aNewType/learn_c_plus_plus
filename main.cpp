#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	using namespace std::string_literals;

	std::u32string name0 = U"cherno"s + U"hello";

	const char* example = R"(Line1
Line2
Line3
Line4)";

	const char* ex = "Line1\n"
		"Line2\n"
		"Line3\n";

	const char* name = "cherno";	// 1 bytes, also can say: const char* name = u8"cherno";
	std::cout << strlen(name) << std::endl;
	std::cout << name << std::endl;

	const wchar_t* name2 = L"cherno";	// 2 bytes or 4 bytes
	const char16_t* name3 = u"cherno";	// 2 bytes
	const char32_t* name4 = U"cherno";	// 4 bytes
 	
	std::cin.get();
} 