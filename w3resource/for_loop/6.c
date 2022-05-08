/**
 *	author : sheikhlimon
 *	created : 08.05.2022 13:27:45
 **/

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", i, n, i*n);
    }
    return 0;
}