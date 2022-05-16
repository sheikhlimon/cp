/**
*	author : sheikhlimon
*	created : 16.05.2022
**/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>



int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("*p = %d\n", *p);
    printf("Value of p is %p\n", p);

    return 0;
}