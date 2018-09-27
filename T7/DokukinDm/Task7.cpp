#include "stdafx.h"
#include <queue>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int i = 0;
    int k = 0;
    queue <int> t;
    queue <int> t1;
    vector<int> arr(10);
    for (int i = 0; i <= 9; i++) {
        cout << "Введите элемент массива ";
        cin >> arr[i];
        cout << endl;
    }
    for (int i = 0; i <= 9; i++) {
        if (arr[i] % 2 == 0) {
            t.push(arr[i]);
        }
        else {
            t1.push(arr[i]);
        }
    }
    int a = t.size();
    int b = t1.size();
    cout << "Чётные числа: ";
    for (int i = 0; i < a; i++) {
        cout << t.front();
        t.pop();
    }
    cout << endl;
    cout << "Нечётные числа: ";
    for (int i = 0; i < b; i++) {
        cout << t1.front();
        t1.pop();
    }
    cout << endl;
    return 0;
}
