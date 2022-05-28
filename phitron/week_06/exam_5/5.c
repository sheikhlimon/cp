#include<stdio.h>
#include<string.h>



int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%p", &*(a+4));

    return 0;
}