#include <iostream>

class Entity
{
protected:
	int X, Y;
	void Print(){}
	
	Entity()
	{
		X = 0;
		Y = 0;
		Print();
	}
};

class Player : public Entity
{
public:
	Player()
	{
		X = 2;
		Print();
	}
};

int main()
{
	//change the private keyword to public
	Entity e;
	e.Print();
	e.X = 2;
	std::cin.get();
}