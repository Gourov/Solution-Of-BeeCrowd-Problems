#include <stdio.h>
#include <math.h>

int isPrime(unsigned int num)
{
    int root = (int)sqrt(num);

    if (num != 2  && num % 2 == 0 || num == 1)
        return 0;

    for (int i = 3; i <= root; i += 2)
        if (num % i == 0)
            return 0;

    return 1;

}

int main()
{
    int total_coins;
    while(scanf("%d", &total_coins) != EOF)
    {
        int coins[total_coins];
        for(int i = 0; i < total_coins; i++)
            scanf("%d", &coins[i]);

        int jump;
        scanf("%d", &jump);

        int sum = 0;
        for(int i = total_coins - 1; i >= 0; i -= jump)
        {
            sum += coins[i];
        }

        if(isPrime(sum))
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        else
            printf("Bad boy! I’ll hit you.\n");
    }
    return 0;
}
