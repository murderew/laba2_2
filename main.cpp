#include "move.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Rus");
	int c;
	std::cout << "Enter array size ";
	std::cin >> c;
	int *mas = new int[c];
	void(*minFunction)(int, int[]);
	srand(time(NULL));
	for (int i = 0; i < c; i++) {

		mas[i] = rand();
	}
	for (int i = 0; i < c; i++) {

		std::cout << mas[i] << " ";
	}
	std::cout << std::endl;
	minFunction = Function(c, mas);
	minFunction(c, mas);
	std::cout << "Array after: " << std::endl;
	for (int i = 0; i < c; i++) {
		std::cout << mas[i] << " ";
	}
	return 0;
}