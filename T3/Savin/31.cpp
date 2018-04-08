#include <iostream>

using namespace std;
template< class Y >
void insertSort(Y* a, int size)
{
    Y tmp;
    int k,g;
    for (int k = 1, g; k < size; ++k) // ���� ��������, k - ����� �������
    {
        tmp = a[k];
        for (g = k - 1; g >= 0 && a[g] > tmp; --g) // ����� ����� �������� � ������� ������������������
            a[g + 1] = a[g];    // �������� ������� �������, ���� �� �����
        a[g + 1] = tmp; // ����� �������, �������� �������
    }
}
int main()
{
    int arr[10];
    int ki;
    for (k=0; k<10; k++){
        cin >> arr[k];
    }
    insertSort(arr, 10);
     for (k=0; k<10; k++){
        cout << arr[k] << '\n';
    }
    return 0;
}
