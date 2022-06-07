/**
 *	author: sheikhlimon
 *	created: 2022.06.04
 **/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, num, isPrime;
    printf("%d", )
        isPrime = 1;
    printf("enter number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1 && num > 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is composite number", num);
    }
    return 0;
}