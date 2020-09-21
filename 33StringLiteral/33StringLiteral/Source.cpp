#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	using namespace std::string_literals;
	const char* name = u8"zzdzzd";
	const wchar_t* name2 = L"zzdzzd";
	const char16_t* name3 = u"zzdzzd";
	const char32_t* name4 = U"zzdzzd";

	std::u32string name0 = U"zzdzzd"s + U"zzdzzd";


	const char* example = R"(Line1 \n
Line2
Line3
Line4)";

	std::cout << example<< std::endl;
	std::cin.get();
}