#include <stdio.h>
void multiply(float num1, float num2); //Function Call

int main() 
{
    float num1,num2; //Number Declaration
    printf("Enter the first number\n");
    scanf("%f",&num1); //Initializing the first number
    printf("Enter the second number\n");
    scanf("%f",&num2); //Initializing the second number

    multiply(num1,num2); //Function Call

    return 0;
}
void multiply(float num1, float num2) //Fuction Definition
{
    float num = num1*num2; //Multiplying the two numbers

    //Print the product of the two numbers upto 2 decimal places
    printf("The product of %f and %f is %.2f", num1,num2,num);
}
