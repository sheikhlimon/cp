/**
 *	author: sheikhlimon
 *	created: 2022.06.08
 **/

#include <stdio.h>
#include <string.h>

int main()
{
    int n, pos;

    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element position to delete :");
    scanf("%d", &pos);

    if (pos < 0 || pos > n)
    {
        printf("size between 1 to %d", n);
    }

    else
    {
        for (int i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("\narray after delete: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}