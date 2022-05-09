/**
*	author : sheikhlimon
*	created : 09.05.2022 13:22:53
**/

#include<stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[200];
    int s1, s2, s3;
    int i, j, k;
    printf("first array");
    scanf("%d", &s1);
    for(i=0;i<s1;i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("for second array");
    scanf("%d", &s2);
    for(i=0;i<s2;i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr2[i]);
    }
    //merge array
    s3 = s1+s2;
    return 0;
}