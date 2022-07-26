#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    int checkValue;
    cout<<"enter the value for search: ";
    cin>>checkValue;

    int flag = 0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] == checkValue)
        {
            cout<<"Index No: "<< i << " Position: "<< i+1<<endl;
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout<<"not found";
    }

    return 0;
}