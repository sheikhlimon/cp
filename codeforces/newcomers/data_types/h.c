#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    char ch='/';
    printf("floor %d %c %d = %lf\n", a, ch, b, floor(a/b));
    printf("ceil %d %c %d = %lf\n", a, ch, b, ceil(a/b));
    printf("round %d %c %d = %lf", a, ch, b, round(a/b));

    return 0;
}