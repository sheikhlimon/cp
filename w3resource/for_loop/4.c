/**
*	author : sheikhlimon
*	created : 07.05.2022 15:39:36
**/

#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    float avg;
    printf("Input the 10 numbers : \n");
    for (i=1;i<=10;i++)
    {
        printf("Number-%d :", i);

        scanf("%d", &n);
        sum += n;
    }
    avg=sum/10.0;
    printf("The sum of 10 no is : %d\nThe Average is : %f\n", sum, avg);

    return 0;
}
