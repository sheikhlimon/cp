/**
*	author: sheikhlimon
*	created: 2022.06.08
**/

#include<stdio.h>
#include<string.h>


int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int even=0, odd=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("%d\n", even);
    printf("%d", odd);

    return 0;
}