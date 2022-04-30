#include <stdio.h>
int main()
{
    int time;
    int hrs=0,min=0,sec=0;
    printf("enter the time");
    scanf("%d",&time);

    hrs=time/3600;
    time=time%3600;

    min=time/60;
    time=time%60;

    sec=time;
    printf("Hrs: Min: Sec: %d:%d:%d\n",hrs,min,sec);
    return 0;
}
