/**
 *	author : sheikhlimon
 *	created : 16.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    // call isPrime() functions
    if (isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }

    // call isArmstrong() function
    if (isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }

    // call isPerfect() function
    if (isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number\n", num);
    }
    return 0;
}

// check whether a number is prime or not
// returns 1 if the number is prime otherwise 0

int isPrime(int num)
{
    int i;

    for (i = 2; i <= num / 2; i++)
    {
        // if the number is divisible by any number
        // other other 1 and self then it is not prime

        if (num % i == 0)
        {
            return 0;
        }

        return 1;
    }
}
// check whether a number is Armstrong number or not
//  returns 1 if the number is Armstrong number otherwise 0
int isArmstrong(int num)
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;

    originalNum = num;

    // find total digits in num
    digits = (int)log10(num) + 1;

    // calculate sum of power of digits
    while (num > 0)
    {
        // extract the last digit
        lastDigit = num % 10;

        // compute sum of power of last digit
        sum = sum + round(pow(lastDigit, digits));

        // remove the last digit
        num = num / 10;
    }
    return (originalNum == sum);
}

// check whether the number is perfect number or not
// returns 1 if the number is perfect otherwise 0
int isPerfect(int num)
{
    int i, sum, n;
    sum = 0;
    n = num;

    for (i = 1; i < n; i++)
    {
        // if i is a divisor of num
        if (n % i == 0)
        {
            sum += i;
        }
        return (num == sum);
    }
}
