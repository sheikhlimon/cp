#include <stdio.h>
int main()
{
    int t, d = 0;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
            d++;
    }
    printf("%d", d);
    return 0;
}