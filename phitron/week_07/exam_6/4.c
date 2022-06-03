#include <stdio.h>
#include <string.h>

typedef struct
{
    int numerator;
    int denominator;
} fraction;

fraction inverse(int a, int b)
{
    fraction fr1, fr2, res;

    printf("first fraction x/y: ");
    scanf("%d /%d", &fr1.numerator, &fr1.denominator);
    printf("second fraction x/y: ");
    scanf("%d /%d", &fr2.numerator, &fr2.denominator);

    res.numerator = fr1.numerator * fr2.numerator;
    res.denominator = fr1.denominator * fr2.denominator;
}

int main()
{
    fraction fr1;
    fraction fr2;
    fraction res;

    printf("\n result of %d/%d * %d/%d is %d/%d\n\n\n",
           fr1.numerator, fr1.denominator,
           fr2.numerator, fr2.denominator,
           res.numerator, res.denominator);
    return 0;
}