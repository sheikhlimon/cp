/**
*	author : sheikhlimon
*	created : 09.05.2022 15:32:15
**/

#include<stdio.h>
int main()
{
    int n, i;
    int arr[1000];
    scanf("%d", &n);
    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    printf("\nAll negative elements in array are : ");
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
            printf("%d ", arr[i]);
    }
    return 0;
}