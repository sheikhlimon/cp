#include<stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 20;
    /*
    * If (num1 > num2) then
    *   assign num1 to max
    * else
    *   assign num2 to max
    */

    int max = (num1>num2) ? num1 : num2;
    printf("Maximum is %d.", max);
    return 0;
}