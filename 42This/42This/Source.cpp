#include <iostream>
#include <string>

class Entity
{
public:
	int x, y;
	Entity(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	int GetX() const
	{
		const Entity* e = this;
		

		return e->y;
	}
};

int main()
{
	Entity e(3,6);
	std::cout << e.GetX() << std::endl;
	std::cin.get();
}