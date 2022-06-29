#include <stdio.h>
#include <string.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
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