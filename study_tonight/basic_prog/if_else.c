#include <stdio.h>
int main() 
{
    int number;
    printf("Please enter a number: \n");
    scanf("%d", &number);

    //for single statements we can skip the curly brackets


   if(number < 100) {
        printf("Number is less than 100!");
    }
    else if(number == 100) {
        printf("Number is 100!\n");
    }
    else {
        printf("Number is greater than 100!\n");
    }

    return 0;
}

