/**
*	author: sheikhlimon
*	created: 14.06.2022
*/

#include <stdio.h>
#include <string.h>

void string_copy(char str[], char str2[])
{
    int i=0;
    while(str[i] != '\0')
    {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';

    // int len = strlen(str);
    // for(int i=0; i<len; i++)
    // {
    //     str2[i] = str[i];
    // }
    // str2[len] = '\0';
}

int main()
{
    char a[] = "ello";
    char b[10];

    string_copy(a, b);
    printf("%s", b);
    return 0;
}