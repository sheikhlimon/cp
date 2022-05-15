/**
 *	author : sheikhlimon
 *	created : 07.05.2022 19:52:06
 **/

#include <stdio.h>
    int factorial(int n) {
        if (n == 0)
        return 1;
        else
        return (n * factorial(n-1));
    }
     
    int main(){
        int n,result;
        printf("Enter the value of n: ");
        scanf("%d",&n);
        result = factorial(n);
        printf("Factorial is : %d",result);
     
        return 0;
}

