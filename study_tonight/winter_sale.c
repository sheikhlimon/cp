#include <stdio.h>
int main() 
{
    float X, P;
    scanf("%f %f", &X, &P);
    //convert the decimal
    float r = X / 100;    
    //divide discount from sale price
    float d = P / (1 - r);    
    printf("%.2f", d);
    
    return 0;
}
