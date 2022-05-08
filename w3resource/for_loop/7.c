/**
*	author : sheikhlimon
*	created : 08.05.2022 13:41:53
**/

#include<stdio.h>
int main()
{
    int i,j, sum = 0;
    scanf("%d", &i);
    for(j = 1; j <= i; j++)
    {
        printf("%d\n", 2*j-1);
        sum += 2*j-1;
    }
    printf("%d\n%d\n", i, sum);
    return 0;
}