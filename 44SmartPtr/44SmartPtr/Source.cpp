#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed" << std::endl;
	}
	void Print()
	{}
};

int main()
{
	{
		std::shared_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		}
	}
	std::cin.get();
}