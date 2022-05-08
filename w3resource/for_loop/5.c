/**
*	author : sheikhlimon
*	created : 08.05.2022 13:06:22
**/

#include<stdio.h>
int main()
{
    int i, ctr;
    scanf("%d", &ctr);
    for(i=1;i<=ctr;i++)
    printf("Number is : %d and cube of %d is :%d \n", i,i, (i*i*i));
    return 0;
}