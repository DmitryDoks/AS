#include "stdafx.h"
#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <queue>

using namespace std;

////////////////////////////////////////////////////////

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	queue<int > q1;
	queue<int> q2;

	//////////////////////////////////////////////////////////

	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) q1.push(arr[i]);
		else q2.push(arr[i]);
	}

	/////////////////////////////////////////////////////////////////

	cout << q1.front()<<endl;
	cout << q1.back() << endl;
	cout << q2.front() << endl;
	cout << q2.back() << endl;

	/////////////////////////////////////////////////////////////////

	system("pause");

	return 0;
}