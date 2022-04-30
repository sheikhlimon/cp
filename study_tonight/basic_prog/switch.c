#include <stdio.h>
int main() 
{
    //Local variable definition
    char grade;
    printf("Enter your grade: \n");
    scanf("%c", &grade);

    switch(grade)
        {
            case 'A':
                printf("Excellent\n");
                break;
            case 'B':
                printf("Keep it up!");
                break;
            case 'C':
                printf("Well done\n");
                break;
            case 'D':
                printf("You passed\n");
                break;
            case 'F':
                printf("Better luck next time\n");
                break;
            default:
                printf("Invalid grade\n");
        }
        printf("Your grade is %c\n", grade);

    return 0;
}

