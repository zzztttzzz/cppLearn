#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	mutable int m_DebugCount = 0;
public:
	const std::string& GetName()  const 
	{
		m_DebugCount++;
		return m_Name; 
	}
};


int main()
{
	const Entity e;
	
	const std::string& str = e.GetName();
	
	std::cout << str << std::endl;

	int x = 8;
	auto f = [=]() mutable
	{
		x++;
		std::cout << x << std::endl;
	};
	f();

	std::cin.get();
}