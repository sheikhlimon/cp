#include <stdio.h>
int main()
{
    int i, j, c;
    int ar[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 1 + i; j < 3; j++)
        {
            if (ar[j] < ar[i])
            {
                c = ar[i];
                ar[i] = ar[j];
                ar[j] = c;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", ar[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 1 + i; j < 3; j++)
        {
            if (ar[j] > ar[i])
            {
                c = ar[i];
                ar[i] = ar[j];
                ar[j] = c;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}