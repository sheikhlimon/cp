#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n == i)
            printf("I hate it");
        else if (n == i)
            printf("I hate that I love it");
        else if (n == i)
            printf("I hate that I love that I hate it");
        else
            continue;
    }

    return 0;
}