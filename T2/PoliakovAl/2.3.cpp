// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 


int main()
{
	int mass[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	std::cout << "massiv:";
	for (int &i : mass) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	for (int &i : mass)
	{
		i *= 2;
	}
	std::cout << "Konechniy massiv:";
	for (int &i : mass) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	system("pause");
    return 0;
}

