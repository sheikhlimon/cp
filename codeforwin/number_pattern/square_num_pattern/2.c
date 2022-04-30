#include<stdio.h>
int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows;  i++)
    {
       for (int j = 0; j < cols; j++)
       {
           if(i%2 == 0)
                printf("1");
            else
                printf("0");
       }
       printf("\n");
        
    }
    
    return 0;
}