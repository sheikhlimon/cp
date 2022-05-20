/**
 *	author : sheikhlimon
 *	created : 18.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n, p, v, t, c = 0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d%d%d", &p, &v, &t);
        if (p + v + t >= 2)
            c++;
    }
    printf("%d", c);
    return 0;
}