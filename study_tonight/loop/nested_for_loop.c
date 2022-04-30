#include <stdio.h>
int main() 
{
    int i,j,k;
    printf("\n\nOutput of the nested loop is: \n\n");
    for (i = 0; i < 10; i++) 
        {
            printf("\t\t\t\t");
            for(j = 0; j < 10; j++)
            printf("* ");

            printf("\n");
        }
    
    return 0;
}

