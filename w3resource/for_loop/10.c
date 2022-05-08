/**
*	author : sheikhlimon
*	created : 08.05.2022 15:24:50
**/

#include<stdio.h>
int main()
{
    int i,j,rows;
    scanf("%d", &rows);
    for(i = 1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}