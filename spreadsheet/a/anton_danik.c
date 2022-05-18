/**
 *	author : sheikhlimon
 *	created : 18.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        printf("Anton");
    if (a < d)
        printf("Danik");
    if (a == d)
        printf("Friendship");
    return 0;
}