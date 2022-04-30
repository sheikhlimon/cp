#include<stdio.h>
int main()
{
    unsigned long long a;
    scanf("%llu", &a);
    printf("%llu", (a*(a+1))/2);
    
    return 0;
}