#include <stdio.h>
int main() 
{
    // always declare the variables before using them

    int i = 0;

    printf("\nPrinting number using while loop from 0 to 9\n\n");

    // while i is less than 10

    while(i<10)
        {
            printf("%d\n", i);

            //update i so the condition can be met eventually to terminate the loop

            i++;
        }
    
    return 0;
}

