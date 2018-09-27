#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;
void fanc(int *a, int m);
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
int main() {
    int i;
    int n;
    cout << "Введите размер массива";
    cin >> n;
    int *arr1 = new int[n];
    for (i = 0; i <= n; i++) {
        arr1[i] = i;
    }
    for (i = 0; i <= n; i++) {
        cout << arr1[i]<<"  ";
    }
    cout << endl;
    fanc(arr1, n);
    for (i = 0; i <= n; i++) {
        cout << arr1[i]<< "  ";
        
    }
    cout << std::endl;
    return 0;
}

