#include <stdio.h>
#include <array>
#include <iostream>

void Arr1(array<int,10>& arr){
    std::cout<<"������������ ������ � �������������� ����������"<<std::endl;
    for(int i=0;i<arr.size();i++){
        if(i%2==0)
			arr[i]=arr[i]*2;
        else 
			arr[i]--;
       std::cout<<arr[i]<<" ";
    }
}
void Arr2(int *arr){
    std::cout<<"������������ ������ � �������������� new"<<std::endl;
    for(int i=0;i<10;i++){
        if(i%2==0)
			arr[i]=arr[i]*2;
        else 
			arr[i]--;
        std::cout<<arr[i]<<" ";
    }
}
void Arr3(int arr[10]){
    cout<<"������������ ������, �������� ����������"<<std::endl;
    for(int i=0;i<10;i++){
        if(i%2==0)
			arr[i]=arr[i]*2;
        else 
			arr[i]--;
        std::cout<<arr[i]<<" ";
    }
}
