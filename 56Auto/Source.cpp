#include <iostream>
#include <string>
#include <vector>

int main()
{
	auto a = "zzdzzd";
	std::vector<std::string> str;
	str.push_back("zzdzzd");
	str.push_back("zzzttt");

	for (std::vector<std::string>::iterator it = str.begin(); it < str.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	
	std::cin.get();
}