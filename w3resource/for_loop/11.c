/**
*	author : sheikhlimon
*	created : 08.05.2022 15:28:48
**/

#include<stdio.h>
int main()
{
    int i,j,rows;
    int sum=0;
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}