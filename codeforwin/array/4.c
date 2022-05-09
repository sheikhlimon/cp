/**
*	author : sheikhlimon
*	created : 09.05.2022 16:13:05
**/

#include<stdio.h>
int main()
{
    int arr[100];
    int i, max, min, size;

    //input size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    //input array elements
    printf("Elements in the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    //assume first element as maximum and minimum
    max = arr[0];
    min = arr[0];

    //find maximum and minimum in all array elements
    for(i=1;i<size;i++)
    {
        //if current element is greater than max
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    //print maximum and minimum element
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}