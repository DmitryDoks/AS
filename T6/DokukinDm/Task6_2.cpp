#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;
stack <int> st;
int main() {
    int a = 36, b = 0;
    while (a >= 2) {
        b = a / 2;
        st.push(a % 2);
        a = b;
    }
    cout  <<"36 в десятичной системе счисления"<<endl<< "1 ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << " в двоичной системе счисления";
    getchar();
    getchar();
    return 0;
}
