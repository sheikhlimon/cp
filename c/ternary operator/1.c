#include <stdio.h>

int main()
{
    printf("Hello World\n");

    char str1[5] = "test";
    char str2 = NULL;
    printf("\nresult: %s", str1 ? "str is not empty" : "str is empty");
    printf("\nresult: %s", str2 ? "str is not empty" : "str is empty");

    return 0;
}