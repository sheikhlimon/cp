#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void sort(int n, int a[])
{
    for (int steps = 0; steps < n; steps++)
    {
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] < a[i - 1])
            {
                int temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
    }
}

bool is_reverse_sorted(int n, int a[])
{
    if (n == 0 || n == 1)
        return true;
    for (int i = 1; i < n; i++)
        if (a[i] < a[i - 1])
            return false;
    return true;
}

int main()
{
    int n = 4;
    int a[] = {6, 4, 3, 1};
    sort(n, a);
    if(is_reverse_sorted(n, a))
        printf("y");
    else
        printf("n");
    return 0;
}