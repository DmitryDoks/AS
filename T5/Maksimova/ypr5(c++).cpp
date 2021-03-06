// ypr5(c++).cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
#include <vector>

void Sort(std::vector<int>&);
int main()
{
	std::vector<int> arr;
	for (int y = 0; y < 30; y++) {
		arr.push_back(rand());
	}
	std::cout << "Massiv:"<<std::endl;
	for (int i = 0; i < arr.size(); i++) {
		std::cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	std::cout << std::endl;
	Sort(arr);

	std::cout << "Otsortirovannyu massiv:" << std::endl;
	for (int i = 0; i < arr.size(); i++) {
		std::cout << "arr[" << i << "] = " << arr[i] << "\n";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}

void Sort(std::vector<int>& vec) {
	int radix = 10;
	bool max = false;
	int tmp = 0, placement = 1;

	while (!max) {
		max = true;
		std::vector<int> mas[10]; 

		for (unsigned int i = 0; i < vec.size(); i++) {
			tmp = vec[i] / placement;

			mas[tmp%radix].push_back(vec[i]);

			if ((max) && (tmp > 0)) { max = false; }

		}
		int a = 0;
		for (int b = 0; b < radix; b++) {
			std::vector<int> buck = mas[b];
			for (int i = 0; i < buck.size(); i++) {
				vec[a] = buck[i];
				a += 1;
			}

		}
		placement *= radix;
	}
}


