/**
 *	author: sheikhlimon
 *	created: 2022.06.08
 **/

#include <stdio.h>
#include <string.h>

int main()
{
    int n, count=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++)
    {
        if(arr[i]<0)
            count++;
    }
    
    printf("%d", count);

    return 0;
}