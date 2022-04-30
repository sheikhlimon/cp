#include <stdio.h>
int main() 
{
    double x,p;
    double answer;
    scanf("%lf %lf",&x,&p);
    answer = (100*p)/(100-x);

    printf("%.2lf", answer);
    
    return 0;
}

