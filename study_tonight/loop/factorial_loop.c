#include <stdio.h>
#include <conio.h>
int main() 
{
    int fact, i, n;
    fact = 1;
    printf("Enter the number\t");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
        {
            fact = fact * i;
        } 
    printf("factorial of %d is %d", n, fact);
    getch();
    return 0;
}

