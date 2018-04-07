// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <queue>
#include <iostream>
#include <vector> // подключаем модель Векторов
using namespace std;
int main()
{
	int i = 0;
	int k = 0;
	queue <int> q;
	queue <int> q1;
	vector<int> myVector(10);
	for (int i = 0; i <= 9; i++) {
		cout << "Vvedite eliment massiva ";
		cin >> myVector[i];
		cout << endl;
	}
	for (int i = 0; i <= 9; i++) {
		if (myVector[i] % 2 == 0) {
			q.push(myVector[i]);
		}
		else {
			q1.push(myVector[i]);
		}
	}
	int a = q.size();
	int b = q1.size();
	cout << "Chotnie chisla: ";
	for (int i = 0; i < a; i++) {
		cout << q.front();
		q.pop();
	}
	cout << endl;
	cout << "Nechotnie chisla: ";
	for (int i = 0; i < b; i++) {
		cout << q1.front();
		q1.pop();
	}
	cout << endl;
	system ("pause");
    return 0;
}

