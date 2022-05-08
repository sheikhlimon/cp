/**
*	author : sheikhlimon
*	created : 08.05.2022 15:19:10
**/

#include<stdio.h>
int main()
{
    int rows;
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}