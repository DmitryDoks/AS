

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void sort(int *arr, size_t size)
{
	for (size_t i = 1; i < size; ++i)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (i % 1000 == 0) printf("%d\n", i);
	}
}

void test(int razm)
{
	int *arr = new int[razm];
	for (size_t i = 0; i < razm; i++)
	{
		arr[i] = rand() % razm;
	}

	time_t t1 = time(0);
	sort(arr, razm);
	time_t t2 = time(0);
	printf("arr razmera %d sort %d sec\n", razm, t2 - t1);
	delete[] arr;
}

int main()
{
	test(1000); //0
	test(100000); //35
	test(1000000);//50
	getchar();
}