#include<stdio.h>
int main()
{
    int x,y,mul;
    printf("Enter first integer: ");
    scanf("%d",&x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    mul = x * y;
    printf("Multiplication of two integers: %d", mul);
    return 0;
}