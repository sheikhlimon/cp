/**
 *	author : sheikhlimon
 *	created : 08.05.2022 15:40:28
 **/

#include <stdio.h>
int main()
{
    int i, j, spc, rows, k, t = 1;
    scanf("%d", &rows);
    spc = rows + 4 - 1;
    for (i = 1; i <= rows; i++)
    {
        for (k = spc; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", t++);
        }
        printf("\n");
        spc--;
    }
    return 0;
}