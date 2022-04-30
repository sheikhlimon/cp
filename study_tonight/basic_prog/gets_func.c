#include <stdio.h>
int main() 
{
    char str[50]; //char array of size 50
    printf("Enter your complete name: \n\n\n");

    gets(str);
    printf("\n\nWelcome to studytonight %s\n\n\n", str);

    return 0;
}

