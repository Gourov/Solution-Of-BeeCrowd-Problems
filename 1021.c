#include <stdio.h>

int main()
{
    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    int coins[5]= {50, 25, 10, 5, 1};

    double amt;
    scanf("%lf", &amt);

    int first = (int) amt;
    int last = (int) (amt*100 - first*100);

    printf("NOTAS:\n");

    for (int i = 0; i < 7; i++)
    {
        if (i == 6)
        {
            printf("MOEDAS:\n");
            printf("%d moeda(s) de R$ %0.2f\n", first/notes[i], (float) notes[i]);
            break;
        }

        printf("%d nota(s) de R$ %0.2f\n", first/notes[i], (float) notes[i]);
        first = first % notes[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d moeda(s) de R$ %0.2f\n", last/coins[i],((float) coins[i]/100));
        last = last % coins[i];
    }
    return 0;
}
