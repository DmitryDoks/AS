// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
#include <chrono> 

int main()
{
	int n;
	std::cout << "Vvedite razmer massiva";
	std::cin >> n;
	auto start = std::chrono::high_resolution_clock::now();
	int *a = new int[n];
	for (size_t i = 0; i < n; i++) {
		a[i] = rand();

	}
	int max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int *c = new int[max + 1 - min];
	for (int i = 0; i < max + 1 - min; i++) {
		c[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		c[a[i] - min] = c[a[i] - min] + 1;
	}
	int i = 0;
	for (int j = min; j < max + 1; j++) {
		while (c[j - min] != 0) {
			a[i] = j;
			c[j - min]--;
			i++;
		}
	}
	std::cout << "Konechnuy massiv: ";
	for (int i = 0; i < n; i++) {
		std::cout << a[i] << std::endl;
	}
	std::cout << std::endl;
	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << "Elapend time:" << elapsed.count();
	system("pause");
    return 0;
}

