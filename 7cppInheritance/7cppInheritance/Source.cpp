#include <iostream>

class Entity
{
public:
	float X, Y;
	Entity()
	{

	}

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	Player player;

	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;

	std::cout << player.X << player.Y << std::endl;
	player.Move(5, 5);
	std::cout << player.X << player.Y << std::endl;
	std::cin.get();
}