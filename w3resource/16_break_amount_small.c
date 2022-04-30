#include<stdio.h>

int main()
{
    int notes[7] = {100,50,20,10,5,2,1};
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    for (int i=0; i<sizeof(notes)/4; i++){
        int calc = amount/notes[i];
        printf("%d Note(s) of %d.00 \n", calc,notes[i]);
        amount-=calc*notes[i];
    }
    return 0;
}