#include <iostream>
#include <string>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size+1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}
	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}
	
	String(const String& other)
		:m_Size(other.m_Size)
	{
		std::cout << "Copyed !" << std::endl;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	~String()
	{
		delete[] m_Buffer;
	}
	friend std::ostream& operator<<(std::ostream & stream, const String & string);
};

void PrintString(const String& string)
{
	std::cout << string << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}
int main()
{
	String string = "zzdzzd";
	String second = string;
	second[2] = 'a';

	PrintString(string);
	PrintString(second);

	std::cout << sizeof(String) << std::endl;
	std::cin.get();
}