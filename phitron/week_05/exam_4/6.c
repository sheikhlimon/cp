#include <stdio.h>
#include <string.h>

void makeArray(int n, int squares[])
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i * i);
    }
}

int main()
{
    int squares[100];
    makeArray(4, squares);
    return 0;
}