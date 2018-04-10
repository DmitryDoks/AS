
#include "stdafx.h"
#include<iostream>
#include<chrono>
#include<array>



	int res,n;


int main() {

	std::cout<< "Введите размер";
	std::cin >> n;

	auto start = std::chrono::high_resolution_clock::now();
	int* a = new int[n];

	for (size_t i = 0; i < n; i++) {
		a[i] = rand();
	}


	for (size_t i = 0; i < n; i++) {
		for (size_t j = i; j > 0 && a[j - 1] > a[j]; j--) {
			res = a[j - 1];
			a[j - 1] = a[j];
			a[j] = res;
		}
	}
	for (size_t i = 0; i < n; i++) {
		std::cout<<a[i]<<' '<<std::endl;
	}

	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << "Время:"<<elapsed.count();

	system("pause");
	return 0;


}