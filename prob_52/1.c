#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
