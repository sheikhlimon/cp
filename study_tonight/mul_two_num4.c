#include <stdio.h>
int main() 
{
    float num1,num2; //Number Declaration
    printf("Enter the first number\n");
    scanf("%f",&num1); //Initializing the first number
    printf("Enter the second number: ");
    scanf("%f", &num2); //Initializing the second number

    //Print the product of the two numbers by rounding it up to 2 decimal places
    printf("The product of %f and %f is %.2f",num1,num2,num1*num2);

    return 0;
}

