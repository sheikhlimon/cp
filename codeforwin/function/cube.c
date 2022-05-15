/**
 *	author : sheikhlimon
 *	created : 07.05.2022 19:52:06
 **/

#include <stdio.h>

double cube(double num)
{
    return (num*num*num);
}

int main()
{
    int num;
    double c;

    printf("Enter any number: ");
    scanf("%d", &num);

    c = cube(num);

    printf("Cube of %d is %.2f", num, c);
    return 0;
}

