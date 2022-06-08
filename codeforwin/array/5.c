/**
 *	author: sheikhlimon
 *	created: 2022.06.04
 **/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1, max2;

    max1 = max2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
            
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d\n", max2);
    return 0;
}