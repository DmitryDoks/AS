#include <iostream>
#include <queue>
#include "stdafx.h"
using namespace std;


int main() {
	queue <int> q;
	queue <int> a, b;
	for (int i = 0; i < 10; i++) {
		q.push(rand());
	}
	for (int i = 0; i < 10; i++) {
		if (q.front() % 2)
			b.push(q.front());
		else
			a.push(q.front());
		q.pop();

	}
	cout << "1 четный элемент: " << a.front() << "последний четный элемент: " << a.back()
		<< "1 нечетный элемент: " << b.front() 
		<< "последний нечетный элемент: " << b.back();
	return 0;
}
