// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
#include <array> 
void fanc(int *a, int m);

int main()
{
	int i;
	int n;
	std::cout << "Vvedite razmer massiva";
	std::cin >> n;
	int *arr1 = new int[n];
	for (i = 0; i <= n; i++) {
		arr1[i] = i;
	}
	for (i = 0; i <= n; i++) {
		std::cout << arr1[i];
		std::cout << std::endl;
	}
	fanc(arr1, n);
	for (i = 0; i <= n; i++) {
		std::cout << arr1[i];
		std::cout << std::endl;
	}
    return 0;
}
void fanc(int *a, int m) {
	for (int j = 0; j<=m; j++) {
		if (j % 2 == 0) {
			a[j] = a[j] * 2;
		}
		if (j % 2 == 1) {
			a[j] = a[j] - 1;
		}
	}
}
