#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;
int main() {
    int i;
    array < int, 10 > arr1;
    for (i = 0; i <= 10; i++) {
        arr1[i] = i;
    }
    for (i = 0; i <= 10; i++) {
        cout << arr1[i];
        cout << endl;
    }
    
    int j;
    int n;
    cin >> n;
    int *arr2 = new int(n);
    for (j = 0; j <n; j++) {
        arr2[j] = j + 1;
        
    }
    arr2 = arr2 - n;
    for (j = 0; j < n; j++) {
        cout << *arr2;
        arr2++;
    }
    
    int k;
    int arr3[10];
    for (k = 0; k <= 10; k++) {
        arr3[i] = i + 2;
    }
    for (k = 0; k <= 10; k++) {
        cout << arr3[i];
        cout << endl;
    }
    return 0;
}
