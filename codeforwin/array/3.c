/**
*	author : sheikhlimon
*	created : 09.05.2022 15:45:33
**/

#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    int arr[100];
    printf("Enter size of array : ");
    scanf("%d", &n);
    printf("Input elements %d : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    printf("sum of elements in array = %d", sum);
    return 0;
}