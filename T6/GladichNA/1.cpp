#include <iostream>
#include <stack>

int main()
{
	std::stack <int> st;
	int a, n;
	n = 0;
	std::cin >> a;
	while (a > 0){
		st.push(a % 2);
		a /= 2;
	}
	n = st.size();
	for (int i = 0; i < n; i++) {
		std::cout << st.top();
		st.pop();
	}
	cin >> a;
	return 0;
}

