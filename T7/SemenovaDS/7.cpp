#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>

using namespace std;


int main(void)
 {
	int i;
	queue<int>q;
	queue<int>q2;
	vector<int>vec(10);
	vec = {1,2,3,4,5,6,7,8,9,10};

	for (i=1 i<= vec.size(); i++){
  		if (vec[i]% 2 == 0){
		  q.push(i);
  			
  		}
		else{

  			q2.push(i);
		}

	}
	cout << "������ �� �� ������" ;
	cout << q2.front() << "\n";
	cout << "��������� �� �� ������";
	cout << q2.back() << "\n\n";
	cout << "������ �� �� ��������";
	cout << q.front() << "\n";
	cout << "��������� �� �� ��������";
	cout << q.back() << "\n";
	return 0;
}

