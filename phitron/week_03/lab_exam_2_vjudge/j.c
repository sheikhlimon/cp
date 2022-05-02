#include <stdio.h>
int main()
{
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    char abc[5] = {a + b + c};
    char bca[5] = {b + c + a};
    char cab[5] = {c + a + b};
    int t = abc + bca+cab;
    printf("%d", t);
    return 0;
}