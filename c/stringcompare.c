/**
*	author : sheikhlimon
*	created : 14.05.2022
**/

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];
    scanf("%s\n", s1);
    scanf("%s", s2);
    int comp = strcmp(s1, s2);
    if(comp == 0)
        printf("equal");
    else if(comp == -1)
        printf("first string smaller than second string");
    else
        printf("first string greater than second string");
    return 0;
}
