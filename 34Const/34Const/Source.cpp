#include <iostream>
#include <string>

class Entity
{
private:
	int m_X=0, m_Y=0;
	mutable int var;
public:
	int GetX() const
	{
		var = 2;
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}
};

void Print(const Entity& e)
{

	std::cout << e.GetX() << std::endl;
}

int main()
{
	const int MAX_AGE = 90;

	int* const a = new int;

	*a =  2;

	Entity e;
	Print(e);


	std::cout << *a << std::endl;
	std::cin.get();
}