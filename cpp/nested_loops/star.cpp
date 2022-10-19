#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Size : ";
    cin >> size;
    //int arr[size];
    int *arr = new int[size];

    for (int i = 1; i <= size; i++)
    {
        cout << "arr[" << i << "] ";
        cin >> arr[i];
    }

    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}