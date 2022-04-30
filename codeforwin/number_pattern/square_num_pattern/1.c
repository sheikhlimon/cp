#include<stdio.h>
int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    for (int i = 1; i <= rows; i++)
    {
       for (int j = 1; j <= cols; j++)
       {
           printf("1");
       }
       printf("\n");
        
    }
    
    return 0;
}