/**
 *	author: sheikhlimon
 *	created: 21.06.2022
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    FILE *myInput;
    myInput = fopen("input.txt", "r");
    while (1)
    {
        char ch = fgetc(myInput);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }

    return 0;
}