/**
 *	author: sheikhlimon
 *	created: 2022.06.08
 **/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int source[100], dest[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &source[i]);
    }

    for (int i = 0; i < n; i++)
    {
        dest[i] = source[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", source[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", dest[i]);
    }

    return 0;
}