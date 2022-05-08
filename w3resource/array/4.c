/**
*	author : sheikhlimon
*	created : 09.05.2022 01:51:24
**/

#include<stdio.h>
int main()
{
    int arr1[100], arr2[100];
    int i, n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<n; i++)
        arr2[i] = arr1[i];
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
        printf("% 5d", arr1[i]);
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
        printf("% 5d", arr2[i]);
    printf("\n\n");
    return 0;
}