#include "stdafx.h" 
#include <iostream> 
#include <array> 

int main() 
{ 


int i; 
std::array < int, 10 > arr1; //������ � ������� array
for (i = 0; i <= 10; i++) { 
arr[i] = i; 
} 
for (i = 0; i <= 10; i++) { 
std::cout � arr[i]; 
std::cout � std::endl; 
} 

///////////////////////////////////////////////




int j; //������ � ������� ��������� new
int n; 
std::cin � n; 
int *ar = new int(n); 
for (j = 0; j <n; j++) { 
ar[j] = j + 1; //*ar=j; ar++; 

} 
ar = ar - n; 
for (j = 0; j < n; j++) { 
std::cout � *ar; 
ar++; 
} 
//////////////////


int k; 
int fmas[10]; //������������� ������
for (k = 0; k <= 10; k++) { 
fmas[i] = i + 2; 
} 
for (k = 0; k <= 10; k++) { 
std::cout � fmas[i]; 
std::cout � std::endl; 
} 

system "pause"; 
return 0; 
}