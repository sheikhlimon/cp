#include <stdio.h>
int main() 
{
    //declare variable
    int i = 10;
    do //do contains the actual code and the updation
    {
        printf("i = %d\n",i);
        i = i-1; //updation
    }
    //while loop doesn't contain any code but just the condition
    while(i > 0);

    printf("\n\nThe value of i after exiting the loop is %d\n\n");
    
    return 0;
}

