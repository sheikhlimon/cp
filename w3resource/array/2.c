/**
*	author : sheikhlimon
*	created : 09.05.2022 01:23:05
**/

#include<stdio.h>
int main()
{
    int i,n,a[100];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("element = %d : ", i);
        scanf("%d",&a[i]);
    }
    printf("\nThe values store into the array are :  \n");
    for(i=0;i<n;i++)
    {
        printf("% 5d", a[i]);
    }
    printf("\n\nThe values store into the array in reverse are : \n");
    for(i=n-1;i>=0;i--)
    {
        printf("% 5d", a[i]);
    }
    printf("\n\n");
    return 0;
}