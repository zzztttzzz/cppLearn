#include <iostream>
#include <string>

class Example
{
public:
	Example()
	{
		std::cout << "created with default!" << std::endl;
	}
	Example(int x)
	{
		std::cout << "created with" << x << "!" << std::endl;
	}
};

class Entity
{
private:
	std::string m_Name;
	Example m_Example;
public:
	Entity()
		:m_Example(Example(8))
	{
		m_Name = "Unknown";
	}
	Entity(const std::string& name)
	{

	}

	const std::string& GetName() const { return m_Name; }
};

int main()
{
	Entity e0;

	std::cin.get();
}