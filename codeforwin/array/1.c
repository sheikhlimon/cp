/**
*	author : sheikhlimon
*	created : 09.05.2022 15:08:45
**/

#include<stdio.h>
#define MAX_SIZE 1000 //maximum array size
int main()
{
    int n, i;
    int arr[MAX_SIZE]; //declare an array of MAX_SIZE
    //input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    //input elements in array
    printf("Enter %d elements in the array : \n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    //print all elements of array
    printf("\nelements are : ");
    for(i=0;i<n;i++)
        printf("%d ", arr[i]);
    return 0;
}