// ypr6.2.cpp: определяет точку входа для консольного приложения.

// 6 лекция перевод из 10(десятичная) в 2(двоичная) в помощью стека

#include "stdafx.h"
#include <stack>
#include <iostream>

using namespace std;

stack <int> st;
int main()
{
	int a = 36, b = 0;
	while (a >= 2) {
		b = a / 2;
		st.push(a % 2);
		a = b;
	}
	cout  <<"36 v 10-oy sisteme schicleniya"<<endl<< "1 ";
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	cout << " v 2-oy sisteme schicleniya";

	getchar();
	getchar();
	return 0;
}