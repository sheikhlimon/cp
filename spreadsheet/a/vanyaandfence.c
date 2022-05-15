/**
 *	author : sheikhlimon
 *	created : 14.05.2022
 **/

#include <stdio.h>
#include <string.h>
int main()
{
    int n, h, count = 0;
    scanf("%d %d", &n, &h);
    int x[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x[i]);
        if (x[i] > h)
        {
            count++;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}