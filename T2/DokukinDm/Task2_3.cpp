#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    std::cout << "массив:";
    for (int &i : arr) {
        cout << i << ", ";
    }
    cout << endl;
    
    for (int &i : arr)
    {
        i *= 2;
    }
    
    cout << "Полученный массив:";
    for (int &i : arr) {
        cout << i << ", ";
    }
    cout << endl;
    return 0;
}
