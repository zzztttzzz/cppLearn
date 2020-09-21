#include <iostream>
#include <array>


void PrintArray(std::array<int,5>& data)
{
	std::cout << data[0]<<'\n' << data[1] << '\n' << data[2] << '\n' << data[3] << '\n' << data[4] << '\n' << std::endl;
}

class Base1
{
public:

	int* ptr;
	int* ptr2 = ptr;
	double c;
	Base1()
		:ptr(new int(5)), c(5.5f)
	{
		std::cout << sizeof(Base1) << std::endl;
	}
	~Base1()
	{
		delete ptr;
	}
};
class Base2
{
public:
	int a;
	double c;
	char b;
	Base2()
	{
		std::cout << sizeof(Base2) << std::endl;
	}
};



int main()
{
	std::array<int, 5> data = {1,2,3,4,5};
	//for (auto it = data.begin(); it != data.end(); it++)
	//{
	//	std::cout << *it << std::endl;
	//}
	std::cout << sizeof(char)<< std::endl;

	Base1 Obj1;
	Base2 Obj2;
	std::cin.get();
}