#include <iostream>

struct Vector
{
	float x, y, z;
	Vector()
		:x(10), y(12), z(13) {}
};

int main()
{
	int value = 5;
	int* hvalue = new int;
	*hvalue = 4;

	int array[5];
	for (int i = 0; i < 5; i++)
	{
		array[i] = i + 1;
	}

	int* harray = new int[5];
	for (int i = 0; i < 5; i++)
	{
		harray[i] = i + 1;
	}

	Vector vector;
	Vector* hvector = new Vector;

	std::cin.get();
}