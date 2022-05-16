/**
 *	author : sheikhlimon
 *	created : 16.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int isEven(int num)
{
    return !(num & 1);
}

int main()
{
    int num;

    // input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // if isEven() function returns 0 then the number is even
    if (isEven(num))
        printf("The number is even");
    else
        printf("The number is odd.");
    return 0;
}