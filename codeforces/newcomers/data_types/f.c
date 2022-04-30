#include<stdio.h>
int main()
{
    unsigned long long int n, m;
    scanf("%llu %llu", &n, &m);
    printf("%llu", n%10 + m%10);
    return 0;
}