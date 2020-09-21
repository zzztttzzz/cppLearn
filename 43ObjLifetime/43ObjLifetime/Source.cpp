#include <iostream>
#include <string>


class Entity
{
public:
	Entity()
	{
		std::cout << "Created!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed!" << std::endl;
	}
};

void CreateArray(int* array)
{
	for (int i = 0; i < 50; i++)
		array[i] = i;
}

class ScopePtr
{
private:
	Entity* m_Ptr;
public:
	ScopePtr(Entity* ptr)
		: m_Ptr(ptr)
	{

	}
	~ScopePtr()
	{
		delete m_Ptr;
	}
};

int main()
{
	int array[50];
	CreateArray(array);

	{
		ScopePtr e = new Entity();
	}

	std::cin.get();
}