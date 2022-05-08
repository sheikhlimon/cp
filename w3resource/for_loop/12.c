/**
*	author : sheikhlimon
*	created : 08.05.2022 15:33:05
**/

#include<stdio.h>
int main()
{
    int i,j,rows, k=1;
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", k++);
        }
        printf("\n");
    }
    return 0;
}