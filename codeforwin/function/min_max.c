/**
 *	author : sheikhlimon
 *	created : 15.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main()
{
    int num1, num2, maxi, mini;

    // input two numbers from user
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    maxi = max(num1, num2);
    mini = min(num1, num2);

    printf("\nMaximum = %d\n", maxi);
    printf("Minimum = %d", mini);
    return 0;
}

//find maximum between two numbers
int max(int num1, int num2)
{
    return(num1 > num2) ? num1 : num2;
}

//find minimum between two numbers
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}