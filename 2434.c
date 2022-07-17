#include <stdio.h>

int main()
{
    int days, balance;
    scanf("%d %d", &days, &balance);

    int movement , small = balance;
    for (int i = 1; i <= days; i++)
    {
        scanf("%d" , &movement);
        balance += movement;

        small = (balance < small) ? balance : small;
    }

    printf("%d", small);

    printf("\n");
    return 0;
}
