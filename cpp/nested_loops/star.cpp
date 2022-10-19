#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cout << "Size : ";
    cin >> sz;
    //int arr[size];
    int *arr = new int[sz];

    for (int i = 1; i <= sz; i++)
    {
        cout << "arr[" << i << "] ";
        cin >> arr[i];
    }

    for (int i = 1; i <= sz; i++)
    {
        cout << arr[i] << " ";
    }
}