/**
*	author: sheikhlimon
*	created: 2022.06.08
**/

#include<stdio.h>
#include<string.h>


int main()
{
    int n, num, pos;
    int arr[100];

    printf("enter element to insert: ");
    scanf("%d", &num);
    printf("enter element position  : ");
    scanf("%d", &pos);

    if(pos > size+1 || pos <= 0)
    {
        printf("enter positon between 1 to %d", size)
    }
    else
    {
        for(int i=n; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[pos-1] = num;
        n++;

        printf("Array element after insert: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}