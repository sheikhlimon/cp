/**
 *	author : sheikhlimon
 *	created : 09.05.2022 01:34:37
 **/

#include <stdio.h>
int main()
{
    int a[100];
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
    printf("Sum of all elements stored in the array is : %d\n\n", sum);
    return 0;
}