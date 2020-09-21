#include <iostream>
//#include <string>

void PrintString(const std::string& string)
{
	//string += "hhhhhhhhh";      //can't append because it's a const string.
	std::cout << string << std::endl;
}


int main()
{
	const char* name = "zzdzzd";
	char name2[7] = { 'z','z','d','z','z','d',0};

	std::string name3 = "zzdzzd";
	name3 = name3 + "hehehe";

	bool contains = name3.find("he") != std::string::npos;

	std::cout << name << std::endl;
	std::cout << name2 << std::endl;
	std::cout << name3 << std::endl;


	std::cin.get();
}