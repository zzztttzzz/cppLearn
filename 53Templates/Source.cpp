#include <iostream>
#include <string>

template <typename T , int N>

class Array {
private:
	T m_Array[N];
public:
	int GetSize() { return N; }
};



int main()
{
	//Print<char>(64);
	//Print("hehehe");

	Array < std::string, 5 > array;
	std::cout << array.GetSize() << std::endl;
	std::cin.get();
}