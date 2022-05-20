#include<stdio.h>
char func(){
    int x = 5;
    double y = 5.0;
    char *p=&x;
    return p;
    }
int main(){
    char px = func();
    printf("%p", px);
return 0;
}