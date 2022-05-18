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
    int a, b, c = 0;
    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        c++;
    }
    printf("%d", c);
    return 0;
}