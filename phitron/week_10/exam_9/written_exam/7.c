#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int mul;
    scanf("%d", &mul);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        mul *= ar[i];
    }
    for(int i=0; i<n; i++)
    {
        if(ar[i] != mul)
        {
            printf("NO");
            break;
        }
        else
        {
            printf("YES");
        }
    }

    return 0;
}