#include <stdio.h>

int main()
{
    int const Curu = 300, Boit = 1500, Boto = 600, Mapin = 1000, Lara = 150, Dona = 225;
    int curu, boit, boto, mapin, lara;
    scanf("%d %d %d %d %d", &curu, &boit, &boto, &mapin, &lara);

    int total = (Curu*curu) + (Boit*boit) + (Boto*boto) + (Mapin*mapin) + (Lara*lara) + Dona;
    printf("%d", total);

    printf("\n");
    return 0;
}
