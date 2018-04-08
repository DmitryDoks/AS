// UPR6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stack>
#include <stdio.h>
#include <iostream>


int main()
{
	std::stack<int> stck;
	int N;
	
	std::cin >> N;
	while (N != 0) {
		stck.push(N % 2);
		N /= 2;
	}
	while (stck.size()!= 0) {
		std::cout << stck.top();
		stck.pop();
	}
	std::cout << "\n";
	system("pause");
    return 0;
}

