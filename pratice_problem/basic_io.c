#include<stdio.h>
int main()
{
    char ch;
    signed short i;
    scanf("Enter a character: ", &ch);
    scanf("Enter a signed short value: ", &i);
    printf("You entered character: %c", ch);
    printf("You entered signed short: %hi", i);
    return 0;
}