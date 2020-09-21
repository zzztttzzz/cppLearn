#include <iostream>
#include <array>

class Entity
{
public:
	int* example = new int[5];
	Entity()
	{
		int a[5];
		int count = sizeof(a) / sizeof(int); //5
		std::cout << count << std::endl;
		for (int i = 0; i < 5; i++)
			example[i] = 2;
	}


};


int main()
{

	Entity e;

	//int* another = new int[5];
	//for (int i = 0; i < 5; i++)
	//	another[i] = 2;
	//
	//delete[] another;
	

	std::array<int, 5> another;
	std::cout << another.size() << std::endl;
	std::cin.get();
}