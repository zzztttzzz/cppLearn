#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name)
		: m_Name(name), m_Age(-1) {}
	explicit Entity(int age)
		: m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
	//Printing;
}

int main()
{
	Entity e(12);
	Entity e1("zzdzzd");
	PrintEntity(std::string("zzdzzd"));
	PrintEntity(12);
	std::cin.get();
}