#include <stdio.h>
#include <ctype.h> // to use system defined function islower & toupper
int main() 
{
    char alphabet;
    printf("Enter an alphabet: ");
    putchar('\n'); // to move to next line

    alphabet=getchar();

    printf("\n\nReverse case of %c is : ", alphabet);

    if(islower(alphabet))
        putchar(toupper(alphabet));

    else
        // must be an uppercase character
        printf("%c", tolower(alphabet));

    return 0;
}

