#include <iostream>

enum ball {red, yellow=5, blue, green, black};

int main()
{
	ball someball=red;  //unscoped enum. varName 'red' can't be used as other varNames.

	int i = red;

	if (someball <10.6)
		std::cout << "comparision is valid!" << std::endl;
	std::cout << blue << std::endl;
}