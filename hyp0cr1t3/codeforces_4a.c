/**
 *	author : sheikhlimon
 *	created : 07.05.2022 14:53:56
 **/

#include <stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    if (w % 2 == 0 && w!=2)
        printf("YES");
    else
        printf("NO");
    return 0;
}