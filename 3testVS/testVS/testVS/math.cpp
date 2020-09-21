#include <iostream>
#include "logH.h"


int Multipy(int a, int b) {
	Log("Multiply.");
	return a * b;
}

int main() {
	std::cout << Multipy(4, 6) << std::endl;
	std::cin.get();
}
