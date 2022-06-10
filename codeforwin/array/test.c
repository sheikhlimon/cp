/**
 *	author: sheikhlimon
 *	created: 2022.06.10
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello";

    char str2[10];

    int i = 0;
    while (str[i] != '\0')
    {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';
    printf("%s ", str2);

    return 0;
}