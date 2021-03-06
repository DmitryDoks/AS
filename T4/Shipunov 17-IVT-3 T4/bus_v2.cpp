//Shipunov 
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <chrono>

#define N 10000
using namespace std;

void bucSort(int a[])
{
	vector <int> b[N];
	for (int i = 0; i<N; i++)
		b[a[i] / 100].push_back(a[i]);
	for (int i = 0; i<N; i++)
		sort(b[i].begin(), b[i].end());
	int index = 0;
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<int(b[i].size()); j++)	
			a[index++] = b[i][j];
	}
}
int main()
{
	
	int a[N] ;
	for (int i = 0; i < N; i++) a[i] = rand();
	
	
	auto start = chrono::high_resolution_clock::now();



	bucSort(a);



	auto finish = std::chrono::high_resolution_clock::now();
	cout << "Sorted aay is:\n";
	chrono::duration<double> elapsed = finish - start;
	cout << elapsed.count() << "\n";
	

	getchar();
	getchar();
	return 0;
}
