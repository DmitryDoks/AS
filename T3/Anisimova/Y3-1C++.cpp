#include <iostream>

using namespace std;
template< class T >
void insertSort(T* a, int size)
{
    T tmp;
    int i,j;
    for (int i = 1, j; i < size; ++i) // ���� ��������, i - ����� �������
    {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; --j) // ����� ����� �������� � ������� ������������������
            a[j + 1] = a[j];    // �������� ������� �������, ���� �� �����
        a[j + 1] = tmp; // ����� �������, �������� �������
    }
}
int main()
{
    int arr[10];
    int i;
    for (i=0; i<10;i++){
        cin >> arr[i];
    }
    insertSort(arr, 10);
     for (i=0; i<10;i++){
        cout << arr[i] << '\n';
    }
    return 0;
}
