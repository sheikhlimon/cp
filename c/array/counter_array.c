/**
 *	author: sheikhlimon
 *	created: 13.06.2022
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[11] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i <= 10; i++)
    {
        if (count[i] > 0)
        {
            printf("value -> %d, count -> %d\n", i, count[i]);
        }
    }

    return 0;
}